/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.35
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class libbbrc {
  public static void setAdjust_ub(boolean value) {
    libbbrcJNI.adjust_ub_set(value);
  }

  public static boolean getAdjust_ub() {
    return libbbrcJNI.adjust_ub_get();
  }

  public static void setDo_pruning(boolean value) {
    libbbrcJNI.do_pruning_set(value);
  }

  public static boolean getDo_pruning() {
    return libbbrcJNI.do_pruning_get();
  }

  public static void setAromatic(boolean value) {
    libbbrcJNI.aromatic_set(value);
  }

  public static boolean getAromatic() {
    return libbbrcJNI.aromatic_get();
  }

  public static void setChisq(SWIGTYPE_p_ChisqConstraint value) {
    libbbrcJNI.chisq_set(SWIGTYPE_p_ChisqConstraint.getCPtr(value));
  }

  public static SWIGTYPE_p_ChisqConstraint getChisq() {
    long cPtr = libbbrcJNI.chisq_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_ChisqConstraint(cPtr, false);
  }

  public static void setKs(SWIGTYPE_p_KSConstraint value) {
    libbbrcJNI.ks_set(SWIGTYPE_p_KSConstraint.getCPtr(value));
  }

  public static SWIGTYPE_p_KSConstraint getKs() {
    long cPtr = libbbrcJNI.ks_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_KSConstraint(cPtr, false);
  }

  public static void setDo_yaml(boolean value) {
    libbbrcJNI.do_yaml_set(value);
  }

  public static boolean getDo_yaml() {
    return libbbrcJNI.do_yaml_get();
  }

  public static void setGsp_out(boolean value) {
    libbbrcJNI.gsp_out_set(value);
  }

  public static boolean getGsp_out() {
    return libbbrcJNI.gsp_out_get();
  }

  public static void setBbrc_sep(boolean value) {
    libbbrcJNI.bbrc_sep_set(value);
  }

  public static boolean getBbrc_sep() {
    return libbbrcJNI.bbrc_sep_get();
  }

  public static void setRegression(boolean value) {
    libbbrcJNI.regression_set(value);
  }

  public static boolean getRegression() {
    return libbbrcJNI.regression_get();
  }

}