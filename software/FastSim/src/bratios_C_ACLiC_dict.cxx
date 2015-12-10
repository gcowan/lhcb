// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIUsersdIneedhamdIchi0dIbratios_C_ACLiC_dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "./bratios.C"

// Header files passed via #pragma extra_include

namespace {
  void TriggerDictionaryInitialization_bratios_C_ACLiC_dict_Impl() {
    static const char* headers[] = {
"./bratios.C",
0
    };
    static const char* includePaths[] = {
"/Users/needham/cern/root-6.02.01/include",
"/Users/needham/cern/root-6.02.01/etc",
"/Users/needham/cern/root-6.02.01/include",
"/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../include/c++/v1",
"/Users/needham/cern/root-6.02.01/etc/cling",
"/Users/needham/cern/root-6.02.01",
"/Users/needham/cern/root-6.02.01/",
"/Users/needham/chi0/",
"/Users/needham/cern/root-6.02.01/include",
"/Users/needham/chi0/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR
#endif
#ifndef __ACLIC__
  #define __ACLIC__
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "./bratios.C"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"bschic1phi", payloadCode, "@",
"bsjpsiphi", payloadCode, "@",
"bsjpsipipivisible", payloadCode, "@",
"bspsi2chic0pipivisible", payloadCode, "@",
"bspsi2chic2pipivisible", payloadCode, "@",
"bspsi2phi", payloadCode, "@",
"bspsi2pipivisible", payloadCode, "@",
"chic0pipi", payloadCode, "@",
"chic2pipi", payloadCode, "@",
"jpsipipi", payloadCode, "@",
"phiKK", payloadCode, "@",
"psi2pipi", payloadCode, "@",
"psi2schic0", payloadCode, "@",
"psi2schic1", payloadCode, "@",
"psi2schic2", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("bratios_C_ACLiC_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_bratios_C_ACLiC_dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_bratios_C_ACLiC_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_bratios_C_ACLiC_dict() {
  TriggerDictionaryInitialization_bratios_C_ACLiC_dict_Impl();
}
