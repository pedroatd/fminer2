/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class Last {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Last(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Last obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        liblastJNI.delete_Last(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Last() {
    this(liblastJNI.new_Last(), true);
  }

  public void Reset() {
    liblastJNI.Last_Reset(swigCPtr, this);
  }

  public void Defaults() {
    liblastJNI.Last_Defaults(swigCPtr, this);
  }

  public int GetMinfreq() {
    return liblastJNI.Last_GetMinfreq(swigCPtr, this);
  }

  public int GetType() {
    return liblastJNI.Last_GetType(swigCPtr, this);
  }

  public boolean GetBackbone() {
    return liblastJNI.Last_GetBackbone(swigCPtr, this);
  }

  public boolean GetDynamicUpperBound() {
    return liblastJNI.Last_GetDynamicUpperBound(swigCPtr, this);
  }

  public boolean GetPruning() {
    return liblastJNI.Last_GetPruning(swigCPtr, this);
  }

  public boolean GetConsoleOut() {
    return liblastJNI.Last_GetConsoleOut(swigCPtr, this);
  }

  public boolean GetAromatic() {
    return liblastJNI.Last_GetAromatic(swigCPtr, this);
  }

  public boolean GetRefineSingles() {
    return liblastJNI.Last_GetRefineSingles(swigCPtr, this);
  }

  public boolean GetDoOutput() {
    return liblastJNI.Last_GetDoOutput(swigCPtr, this);
  }

  public boolean GetBbrcSep() {
    return liblastJNI.Last_GetBbrcSep(swigCPtr, this);
  }

  public boolean GetChisqActive() {
    return liblastJNI.Last_GetChisqActive(swigCPtr, this);
  }

  public float GetChisqSig() {
    return liblastJNI.Last_GetChisqSig(swigCPtr, this);
  }

  public boolean GetRegression() {
    return liblastJNI.Last_GetRegression(swigCPtr, this);
  }

  public int GetMaxHops() {
    return liblastJNI.Last_GetMaxHops(swigCPtr, this);
  }

  public void SetMinfreq(int val) {
    liblastJNI.Last_SetMinfreq(swigCPtr, this, val);
  }

  public boolean SetType(int val) {
    return liblastJNI.Last_SetType(swigCPtr, this, val);
  }

  public boolean SetBackbone(boolean val) {
    return liblastJNI.Last_SetBackbone(swigCPtr, this, val);
  }

  public boolean SetDynamicUpperBound(boolean val) {
    return liblastJNI.Last_SetDynamicUpperBound(swigCPtr, this, val);
  }

  public boolean SetPruning(boolean val) {
    return liblastJNI.Last_SetPruning(swigCPtr, this, val);
  }

  public boolean SetConsoleOut(boolean val) {
    return liblastJNI.Last_SetConsoleOut(swigCPtr, this, val);
  }

  public void SetAromatic(boolean val) {
    liblastJNI.Last_SetAromatic(swigCPtr, this, val);
  }

  public boolean SetRefineSingles(boolean val) {
    return liblastJNI.Last_SetRefineSingles(swigCPtr, this, val);
  }

  public void SetDoOutput(boolean val) {
    liblastJNI.Last_SetDoOutput(swigCPtr, this, val);
  }

  public boolean SetBbrcSep(boolean val) {
    return liblastJNI.Last_SetBbrcSep(swigCPtr, this, val);
  }

  public boolean SetChisqActive(boolean val) {
    return liblastJNI.Last_SetChisqActive(swigCPtr, this, val);
  }

  public boolean SetChisqSig(float _chisq_val) {
    return liblastJNI.Last_SetChisqSig(swigCPtr, this, _chisq_val);
  }

  public boolean SetRegression(boolean val) {
    return liblastJNI.Last_SetRegression(swigCPtr, this, val);
  }

  public boolean SetMaxHops(int val) {
    return liblastJNI.Last_SetMaxHops(swigCPtr, this, val);
  }

  public SVector MineRoot(long j) {
    long cPtr = liblastJNI.Last_MineRoot(swigCPtr, this, j);
    return (cPtr == 0) ? null : new SVector(cPtr, false);
  }

  public void ReadGsp(SWIGTYPE_p_FILE gsp) {
    liblastJNI.Last_ReadGsp(swigCPtr, this, SWIGTYPE_p_FILE.getCPtr(gsp));
  }

  public boolean AddCompound(String smiles, long comp_id) {
    return liblastJNI.Last_AddCompound(swigCPtr, this, smiles, comp_id);
  }

  public boolean AddActivity(float act, long comp_id) {
    return liblastJNI.Last_AddActivity(swigCPtr, this, act, comp_id);
  }

  public int GetNoRootNodes() {
    return liblastJNI.Last_GetNoRootNodes(swigCPtr, this);
  }

  public int GetNoCompounds() {
    return liblastJNI.Last_GetNoCompounds(swigCPtr, this);
  }

  public float ChisqTest(SWIGTYPE_p_std__vectorT_float_t all, SWIGTYPE_p_std__vectorT_float_t feat) {
    return liblastJNI.Last_ChisqTest(swigCPtr, this, SWIGTYPE_p_std__vectorT_float_t.getCPtr(all), SWIGTYPE_p_std__vectorT_float_t.getCPtr(feat));
  }

  public float KSTest(SWIGTYPE_p_std__vectorT_float_t all, SWIGTYPE_p_std__vectorT_float_t feat) {
    return liblastJNI.Last_KSTest(swigCPtr, this, SWIGTYPE_p_std__vectorT_float_t.getCPtr(all), SWIGTYPE_p_std__vectorT_float_t.getCPtr(feat));
  }

}