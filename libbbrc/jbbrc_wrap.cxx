/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "bbrc.h"


#include <string>


#include <stdexcept>


#include <vector>
#include <stdexcept>

SWIGINTERN std::vector< std::string >::const_reference std_vector_Sl_std_string_Sg__get(std::vector< std::string > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_std_string_Sg__set(std::vector< std::string > *self,int i,std::vector< std::string >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_libbbrcJNI_new_1SVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< std::string > *)new std::vector< std::string >();
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_new_1SVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< std::string >::size_type arg1 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< std::string >::size_type)jarg1; 
  result = (std::vector< std::string > *)new std::vector< std::string >(arg1);
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_SVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = ((std::vector< std::string > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_SVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = ((std::vector< std::string > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_SVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (std::vector< std::string >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_SVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = (bool)((std::vector< std::string > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_SVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_SVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->push_back((std::vector< std::string >::value_type const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_libbbrcJNI_SVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< std::string >::value_type *) &std_vector_Sl_std_string_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_SVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  try {
    std_vector_Sl_std_string_Sg__set(arg1,arg2,(std::string const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_delete_1SVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1adjust_1ub_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_adjust_ub = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1adjust_1ub_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_adjust_ub;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1do_1pruning_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_do_pruning = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1do_1pruning_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_do_pruning;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1aromatic_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_aromatic = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1aromatic_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_aromatic;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1chisq_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ChisqBbrcConstraint *arg1 = (ChisqBbrcConstraint *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ChisqBbrcConstraint **)&jarg1; 
  fm::bbrc_chisq = arg1;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_bbrc_1chisq_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ChisqBbrcConstraint *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ChisqBbrcConstraint *)fm::bbrc_chisq;
  *(ChisqBbrcConstraint **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1ks_1set(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  KSBbrcConstraint *arg1 = (KSBbrcConstraint *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(KSBbrcConstraint **)&jarg1; 
  fm::bbrc_ks = arg1;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_bbrc_1ks_1get(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  KSBbrcConstraint *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (KSBbrcConstraint *)fm::bbrc_ks;
  *(KSBbrcConstraint **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1do_1yaml_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_do_yaml = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1do_1yaml_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_do_yaml;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1gsp_1out_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_gsp_out = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1gsp_1out_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_gsp_out;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1bbrc_1sep_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_bbrc_sep = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1bbrc_1sep_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_bbrc_sep;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1regression_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_regression = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1regression_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_regression;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_bbrc_1db_1built_1set(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  bool arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  fm::bbrc_db_built = arg1;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_bbrc_1db_1built_1get(JNIEnv *jenv, jclass jcls) {
  jboolean jresult = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  result = (bool)fm::bbrc_db_built;
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_new_1Bbrc_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Bbrc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Bbrc *)new Bbrc();
  *(Bbrc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_new_1Bbrc_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jint jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  int arg1 ;
  unsigned int arg2 ;
  Bbrc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (Bbrc *)new Bbrc(arg1,arg2);
  *(Bbrc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_new_1Bbrc_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jint jarg1, jlong jarg2, jfloat jarg3, jboolean jarg4) {
  jlong jresult = 0 ;
  int arg1 ;
  unsigned int arg2 ;
  float arg3 ;
  bool arg4 ;
  Bbrc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = jarg4 ? true : false; 
  result = (Bbrc *)new Bbrc(arg1,arg2,arg3,arg4);
  *(Bbrc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_delete_1Bbrc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Bbrc **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_Bbrc_1Reset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  (arg1)->Reset();
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_Bbrc_1Defaults(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  (arg1)->Defaults();
}


SWIGEXPORT jint JNICALL Java_libbbrcJNI_Bbrc_1GetMinfreq(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (int)(arg1)->GetMinfreq();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_libbbrcJNI_Bbrc_1GetType(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (int)(arg1)->GetType();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetBackbone(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetBackbone();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetDynamicUpperBound(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetDynamicUpperBound();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetPruning(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetPruning();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetConsoleOut(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetConsoleOut();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetAromatic(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetAromatic();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetRefineSingles(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetRefineSingles();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetDoOutput(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetDoOutput();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetBbrcSep(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetBbrcSep();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetChisqActive(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetChisqActive();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jfloat JNICALL Java_libbbrcJNI_Bbrc_1GetChisqSig(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jfloat jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  float result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (float)(arg1)->GetChisqSig();
  jresult = (jfloat)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1GetRegression(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (bool)(arg1)->GetRegression();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_Bbrc_1SetMinfreq(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->SetMinfreq(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetType(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetType(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetBackbone(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetBackbone(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetDynamicUpperBound(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetDynamicUpperBound(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetPruning(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetPruning(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetConsoleOut(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetConsoleOut(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_Bbrc_1SetAromatic(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->SetAromatic(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetRefineSingles(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetRefineSingles(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_Bbrc_1SetDoOutput(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->SetDoOutput(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetBbrcSep(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetBbrcSep(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetChisqActive(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetChisqActive(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetChisqSig(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  float arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = (float)jarg2; 
  result = (bool)(arg1)->SetChisqSig(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetRegression(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  bool arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (bool)(arg1)->SetRegression(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1SetMaxHops(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetMaxHops(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libbbrcJNI_Bbrc_1MineRoot(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  jlong jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  unsigned int arg2 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (std::vector< std::string > *)(arg1)->MineRoot(arg2);
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libbbrcJNI_Bbrc_1ReadGsp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  Bbrc *arg1 = (Bbrc *) 0 ;
  FILE *arg2 = (FILE *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = *(FILE **)&jarg2; 
  (arg1)->ReadGsp(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1AddCompound(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  std::string arg2 ;
  unsigned int arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null std::string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (unsigned int)jarg3; 
  result = (bool)(arg1)->AddCompound(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_libbbrcJNI_Bbrc_1AddActivity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jfloat jarg2, jlong jarg3) {
  jboolean jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  float arg2 ;
  unsigned int arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  arg2 = (float)jarg2; 
  arg3 = (unsigned int)jarg3; 
  result = (bool)(arg1)->AddActivity(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_libbbrcJNI_Bbrc_1GetNoRootNodes(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (int)(arg1)->GetNoRootNodes();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_libbbrcJNI_Bbrc_1GetNoCompounds(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Bbrc *arg1 = (Bbrc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Bbrc **)&jarg1; 
  result = (int)(arg1)->GetNoCompounds();
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

