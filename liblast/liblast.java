/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class liblast {
  public static void setLast_do_pruning(boolean value) {
    liblastJNI.last_do_pruning_set(value);
  }

  public static boolean getLast_do_pruning() {
    return liblastJNI.last_do_pruning_get();
  }

  public static void setLast_aromatic(boolean value) {
    liblastJNI.last_aromatic_set(value);
  }

  public static boolean getLast_aromatic() {
    return liblastJNI.last_aromatic_get();
  }

  public static void setLast_chisq(SWIGTYPE_p_ChisqLastConstraint value) {
    liblastJNI.last_chisq_set(SWIGTYPE_p_ChisqLastConstraint.getCPtr(value));
  }

  public static SWIGTYPE_p_ChisqLastConstraint getLast_chisq() {
    long cPtr = liblastJNI.last_chisq_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_ChisqLastConstraint(cPtr, false);
  }

  public static void setLast_ks(SWIGTYPE_p_KSLastConstraint value) {
    liblastJNI.last_ks_set(SWIGTYPE_p_KSLastConstraint.getCPtr(value));
  }

  public static SWIGTYPE_p_KSLastConstraint getLast_ks() {
    long cPtr = liblastJNI.last_ks_get();
    return (cPtr == 0) ? null : new SWIGTYPE_p_KSLastConstraint(cPtr, false);
  }

  public static void setLast_gsp_out(boolean value) {
    liblastJNI.last_gsp_out_set(value);
  }

  public static boolean getLast_gsp_out() {
    return liblastJNI.last_gsp_out_get();
  }

  public static void setLast_bbrc_sep(boolean value) {
    liblastJNI.last_bbrc_sep_set(value);
  }

  public static boolean getLast_bbrc_sep() {
    return liblastJNI.last_bbrc_sep_get();
  }

  public static void setLast_regression(boolean value) {
    liblastJNI.last_regression_set(value);
  }

  public static boolean getLast_regression() {
    return liblastJNI.last_regression_get();
  }

  public static void setLast_max_hops(int value) {
    liblastJNI.last_max_hops_set(value);
  }

  public static int getLast_max_hops() {
    return liblastJNI.last_max_hops_get();
  }

  public static void setLast_db_built(boolean value) {
    liblastJNI.last_db_built_set(value);
  }

  public static boolean getLast_db_built() {
    return liblastJNI.last_db_built_get();
  }

}