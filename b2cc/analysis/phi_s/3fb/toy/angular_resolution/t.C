#include <glob.h>
#include <iostream>

using namespace std;

int main()
{
        glob_t globbuf_nom;
        glob_t globbuf_sme;

        globbuf_nom.gl_offs = 1;
        glob("no_angular_acceptance/one_angle_smeared/*pulls_nominal.root", GLOB_DOOFFS, NULL, &globbuf_nom);
        glob("../*.c", GLOB_DOOFFS | GLOB_APPEND, NULL, &globbuf_nom);
        globbuf_nom.gl_pathv[0] = "ls";
        
	globbuf_sme.gl_offs = 1;
        glob("no_angular_acceptance/one_angle_smeared/*pulls_smeared.root", GLOB_DOOFFS, NULL, &globbuf_sme);
        glob("../*.c", GLOB_DOOFFS | GLOB_APPEND, NULL, &globbuf_sme);
        globbuf_sme.gl_pathv[0] = "ls";

	for (int i = 1; i < globbuf_nom.gl_pathc; i++ )
	{
		cout << globbuf_nom.gl_pathv[i] << endl;
		cout << globbuf_sme.gl_pathv[i] << endl;
	}

return 0;
}
