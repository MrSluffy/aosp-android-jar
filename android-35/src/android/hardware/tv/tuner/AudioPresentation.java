/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=java --structured --version 2 --hash f8d74c149f04e76b6d622db2bd8e465dae24b08c --stability vintf --min_sdk_version current -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/tv/tuner/aidl/android.hardware.tv.tuner-V2-java-source/gen/android/hardware/tv/tuner/AudioPresentation.java.d -o out/soong/.intermediates/hardware/interfaces/tv/tuner/aidl/android.hardware.tv.tuner-V2-java-source/gen -Nhardware/interfaces/tv/tuner/aidl/aidl_api/android.hardware.tv.tuner/2 hardware/interfaces/tv/tuner/aidl/aidl_api/android.hardware.tv.tuner/2/android/hardware/tv/tuner/AudioPresentation.aidl
 */
package android.hardware.tv.tuner;
/** @hide */
public class AudioPresentation implements android.os.Parcelable
{
  public android.hardware.tv.tuner.AudioPreselection preselection;
  public int ac4ShortProgramId = -1;
  @Override
   public final int getStability() { return android.os.Parcelable.PARCELABLE_STABILITY_VINTF; }
  public static final android.os.Parcelable.Creator<AudioPresentation> CREATOR = new android.os.Parcelable.Creator<AudioPresentation>() {
    @Override
    public AudioPresentation createFromParcel(android.os.Parcel _aidl_source) {
      AudioPresentation _aidl_out = new AudioPresentation();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public AudioPresentation[] newArray(int _aidl_size) {
      return new AudioPresentation[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    _aidl_parcel.writeTypedObject(preselection, _aidl_flag);
    _aidl_parcel.writeInt(ac4ShortProgramId);
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
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      preselection = _aidl_parcel.readTypedObject(android.hardware.tv.tuner.AudioPreselection.CREATOR);
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      ac4ShortProgramId = _aidl_parcel.readInt();
    } finally {
      if (_aidl_start_pos > (Integer.MAX_VALUE - _aidl_parcelable_size)) {
        throw new android.os.BadParcelableException("Overflow in the size of parcelable");
      }
      _aidl_parcel.setDataPosition(_aidl_start_pos + _aidl_parcelable_size);
    }
  }
  @Override
  public int describeContents() {
    int _mask = 0;
    _mask |= describeContents(preselection);
    return _mask;
  }
  private int describeContents(Object _v) {
    if (_v == null) return 0;
    if (_v instanceof android.os.Parcelable) {
      return ((android.os.Parcelable) _v).describeContents();
    }
    return 0;
  }
}