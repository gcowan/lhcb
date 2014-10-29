#include <gsl/gsl_sf_legendre.h>
#include "TFile.h"
#include "TTree.h"

void legendre_moments()
{
    //Set up efficiency
    static const int l_max = 6;
    static const int i_max = 4;
    static const int k_max = 2;
    static const int j_max = 2;
    double c[l_max+1][i_max+1][k_max+1][j_max+1];

    for ( int l = 0; l < l_max + 1; l++ )
    {
        for ( int i = 0; i < i_max + 1; i++ )
        {
            for ( int k = 0; k < k_max + 1; k++ )
            {
                for ( int j = 0; j < j_max + 1; j++ )
                {
                    c[l][i][k][j] = 0.;
                }
            }
        }
    }

    c[0][0][0][0] = 0.070537;// +- 0.000042
    c[0][0][0][2] = 0.003374;// +- 0.000108
    c[0][0][1][2] = -0.000793;// +- 0.000108
    c[0][0][2][2] = 0.004150;// +- 0.000104
    c[0][1][0][0] = -0.009559;// +- 0.000175
    c[0][1][0][2] = -0.001790;// +- 0.000180
    c[0][1][1][2] = 0.001620;// +- 0.000180
    c[0][1][2][2] = 0.000894;// +- 0.000172
    c[0][2][0][0] = -0.014521;// +- 0.000227
    c[0][2][1][2] = 0.001962;// +- 0.000233
    c[0][2][2][2] = -0.002894;// +- 0.000224
    c[0][4][0][0] = -0.002925;// +- 0.000307
    c[1][0][0][0] = 0.014735;// +- 0.000218
    c[1][0][0][2] = -0.004731;// +- 0.000224
    c[1][0][1][2] = 0.001244;// +- 0.000223
    c[1][0][2][2] = 0.004222;// +- 0.000215
    c[1][1][0][0] = 0.013788;// +- 0.000366
    c[1][1][1][2] = 0.008654;// +- 0.000375
    c[1][2][0][0] = 0.013075;// +- 0.000476
    c[1][2][0][2] = 0.008135;// +- 0.000492
    c[1][2][2][2] = -0.003336;// +- 0.000467
    c[1][3][1][2] = -0.004594;// +- 0.000575
    c[2][0][0][0] = 0.002701;// +- 0.000294
    c[2][1][1][2] = 0.004370;// +- 0.000507
    c[2][2][0][0] = 0.008449;// +- 0.000640
    c[2][2][0][2] = 0.006358;// +- 0.000663
    c[2][3][0][0] = -0.004795;// +- 0.000759
    c[2][3][1][2] = -0.004152;// +- 0.000771
    c[3][1][0][0] = -0.007938;// +- 0.000598
    c[3][2][0][0] = -0.006623;// +- 0.000772
    c[4][1][0][0] = 0.004372;// +- 0.000681
    c[4][3][0][0] = 0.006850;// +- 0.001044
    c[5][0][0][0] = -0.003132;// +- 0.000446
    c[6][0][0][0] = 0.004619;// +- 0.000485
    c[6][1][0][0] = -0.005224;// +- 0.000822

    //Read in data
    double m23(0.);
    double cosTheta1(0.);
    double phi(0.);
    double cosTheta2(0.);

    double m23_mapped = (m23 - 0.64)/(1.59 - 0.64)*2. + (-1); // should really do this in a generic way

    double angularAcc(0.);
    double Q_l(0.);
    double P_i(0.);
    double Y_jk(0.);
    for ( int l = 0; l < l_max+1; l++ )
    {
        for ( int i = 0; i < i_max+1; i++ )
        {
            for ( int k = 0; k < 3; k++ )
            {
                for ( int j = 0; j < 3; j+=2 ) // limiting the loop here to only look at terms we need
                {
                    if (j < k) continue; // must have l >= k
                    Q_l  = gsl_sf_legendre_Pl     (l,    m23_mapped);
                    P_i  = gsl_sf_legendre_Pl     (i,    cosTheta2);
                    // only consider case where k >= 0
                    // these are the real valued spherical harmonics
                    if ( k == 0 ) Y_jk =           gsl_sf_legendre_sphPlm (j, k, cosTheta1);
                    else          Y_jk = sqrt(2) * gsl_sf_legendre_sphPlm (j, k, cosTheta1) * cos(k*phi);
                    angularAcc += c[l][i][k][j]*(Q_l * P_i * Y_jk);
                }
            }
        }
    }

    //unnormalised moments of degree l
    double P0(0.);


}