/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=java --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-java-source/gen/android/media/audio/common/Spatialization.java.d -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-java-source/gen -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/Spatialization.aidl
 */
package android.media.audio.common;
/** @hide */
public class Spatialization implements android.os.Parcelable
{
  @Override
   public final int getStability() { return android.os.Parcelable.PARCELABLE_STABILITY_VINTF; }
  public static final android.os.Parcelable.Creator<Spatialization> CREATOR = new android.os.Parcelable.Creator<Spatialization>() {
    @Override
    public Spatialization createFromParcel(android.os.Parcel _aidl_source) {
      Spatialization _aidl_out = new Spatialization();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public Spatialization[] newArray(int _aidl_size) {
      return new Spatialization[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    int _aidl_end_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.setDataPosition(_aidl_start_pos);
    _aidl_parcel.writeInt(_aidl_end_pos - _aidl_start_pos);
    _aidl_parcel.setDataPosition(_aidl_end_pos);
  }
  public final void readFromParcel(android.os.Parcel _aidl_parcel)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    int _aidl_parcelable_size = _aidl_parcel.readInt();
    try {
      if (_aidl_parcelable_size < 4) throw new android.os.BadParcelableException("Parcelable too small");;
    } finally {
      if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
        throw new android.os.BadParcelableException("Overflow in the size of parcelable");
      }
      _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    }
  }
  @Override
  public String toString() {
    java.util.StringJoiner _aidl_sj = new java.util.StringJoiner(", ", "{", "}");
    return "Spatialization" + _aidl_sj.toString()  ;
  }
  @Override
  public boolean equals(Object other) {
    if (this == other) return true;
    if (other == null) return false;
    if (!(other instanceof Spatialization)) return false;
    Spatialization that = (Spatialization)other;
    return true;
  }

  @Override
  public int hashCode() {
    return java.util.Arrays.deepHashCode(java.util.Arrays.asList().toArray());
  }
  @Override
  public int describeContents() {
    int _mask = 0;
    return _mask;
  }
  /** @hide */
  public static @interface Level {
    public static final byte NONE = 0;
    public static final byte MULTICHANNEL = 1;
    public static final byte BED_PLUS_OBJECTS = 2;
  }
  /** @hide */
  public static @interface Mode {
    public static final byte BINAURAL = 0;
    public static final byte TRANSAURAL = 1;
  }
}