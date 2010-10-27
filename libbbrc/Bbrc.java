/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */


public class Bbrc {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Bbrc(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Bbrc obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libbbrcJNI.delete_Bbrc(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Bbrc() {
    this(libbbrcJNI.new_Bbrc__SWIG_0(), true);
  }

  public Bbrc(int _type, long _minfreq) {
    this(libbbrcJNI.new_Bbrc__SWIG_1(_type, _minfreq), true);
  }

  public Bbrc(int _type, long _minfreq, float chisq_val, boolean _do_backbone) {
    this(libbbrcJNI.new_Bbrc__SWIG_2(_type, _minfreq, chisq_val, _do_backbone), true);
  }

  public void Reset() {
    libbbrcJNI.Bbrc_Reset(swigCPtr, this);
  }

  public void Defaults() {
    libbbrcJNI.Bbrc_Defaults(swigCPtr, this);
  }

  public int GetMinfreq() {
    return libbbrcJNI.Bbrc_GetMinfreq(swigCPtr, this);
  }

  public int GetType() {
    return libbbrcJNI.Bbrc_GetType(swigCPtr, this);
  }

  public boolean GetBackbone() {
    return libbbrcJNI.Bbrc_GetBackbone(swigCPtr, this);
  }

  public boolean GetDynamicUpperBound() {
    return libbbrcJNI.Bbrc_GetDynamicUpperBound(swigCPtr, this);
  }

  public boolean GetPruning() {
    return libbbrcJNI.Bbrc_GetPruning(swigCPtr, this);
  }

  public boolean GetConsoleOut() {
    return libbbrcJNI.Bbrc_GetConsoleOut(swigCPtr, this);
  }

  public boolean GetAromatic() {
    return libbbrcJNI.Bbrc_GetAromatic(swigCPtr, this);
  }

  public boolean GetRefineSingles() {
    return libbbrcJNI.Bbrc_GetRefineSingles(swigCPtr, this);
  }

  public boolean GetDoOutput() {
    return libbbrcJNI.Bbrc_GetDoOutput(swigCPtr, this);
  }

  public boolean GetBbrcSep() {
    return libbbrcJNI.Bbrc_GetBbrcSep(swigCPtr, this);
  }

  public boolean GetChisqActive() {
    return libbbrcJNI.Bbrc_GetChisqActive(swigCPtr, this);
  }

  public float GetChisqSig() {
    return libbbrcJNI.Bbrc_GetChisqSig(swigCPtr, this);
  }

  public boolean GetRegression() {
    return libbbrcJNI.Bbrc_GetRegression(swigCPtr, this);
  }

  public void SetMinfreq(int val) {
    libbbrcJNI.Bbrc_SetMinfreq(swigCPtr, this, val);
  }

  public boolean SetType(int val) {
    return libbbrcJNI.Bbrc_SetType(swigCPtr, this, val);
  }

  public boolean SetBackbone(boolean val) {
    return libbbrcJNI.Bbrc_SetBackbone(swigCPtr, this, val);
  }

  public boolean SetDynamicUpperBound(boolean val) {
    return libbbrcJNI.Bbrc_SetDynamicUpperBound(swigCPtr, this, val);
  }

  public boolean SetPruning(boolean val) {
    return libbbrcJNI.Bbrc_SetPruning(swigCPtr, this, val);
  }

  public boolean SetConsoleOut(boolean val) {
    return libbbrcJNI.Bbrc_SetConsoleOut(swigCPtr, this, val);
  }

  public void SetAromatic(boolean val) {
    libbbrcJNI.Bbrc_SetAromatic(swigCPtr, this, val);
  }

  public boolean SetRefineSingles(boolean val) {
    return libbbrcJNI.Bbrc_SetRefineSingles(swigCPtr, this, val);
  }

  public void SetDoOutput(boolean val) {
    libbbrcJNI.Bbrc_SetDoOutput(swigCPtr, this, val);
  }

  public boolean SetBbrcSep(boolean val) {
    return libbbrcJNI.Bbrc_SetBbrcSep(swigCPtr, this, val);
  }

  public boolean SetChisqActive(boolean val) {
    return libbbrcJNI.Bbrc_SetChisqActive(swigCPtr, this, val);
  }

  public boolean SetChisqSig(float _chisq_val) {
    return libbbrcJNI.Bbrc_SetChisqSig(swigCPtr, this, _chisq_val);
  }

  public boolean SetRegression(boolean val) {
    return libbbrcJNI.Bbrc_SetRegression(swigCPtr, this, val);
  }

  public boolean SetMaxHops(int val) {
    return libbbrcJNI.Bbrc_SetMaxHops(swigCPtr, this, val);
  }

  public SVector MineRoot(long j) {
    long cPtr = libbbrcJNI.Bbrc_MineRoot(swigCPtr, this, j);
    return (cPtr == 0) ? null : new SVector(cPtr, false);
  }

  public void ReadGsp(SWIGTYPE_p_FILE gsp) {
    libbbrcJNI.Bbrc_ReadGsp(swigCPtr, this, SWIGTYPE_p_FILE.getCPtr(gsp));
  }

  public boolean AddCompound(String smiles, long comp_id) {
    return libbbrcJNI.Bbrc_AddCompound(swigCPtr, this, smiles, comp_id);
  }

  public boolean AddActivity(float act, long comp_id) {
    return libbbrcJNI.Bbrc_AddActivity(swigCPtr, this, act, comp_id);
  }

  public int GetNoRootNodes() {
    return libbbrcJNI.Bbrc_GetNoRootNodes(swigCPtr, this);
  }

  public int GetNoCompounds() {
    return libbbrcJNI.Bbrc_GetNoCompounds(swigCPtr, this);
  }

}
