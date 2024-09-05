/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=java -Weverything -Wno-missing-permission-annotation --min_sdk_version current -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/frameworks/av/av-types-aidl-java-source/gen/android/media/VolumeShaperConfiguration.java.d -o out/soong/.intermediates/frameworks/av/av-types-aidl-java-source/gen -Nframeworks/av/aidl frameworks/av/aidl/android/media/VolumeShaperConfiguration.aidl
 */
package android.media;
/** {@hide} */
public class VolumeShaperConfiguration implements android.os.Parcelable
{
  public int type = android.media.VolumeShaperConfigurationType.ID;
  public int id = 0;
  /** Bitmask, indexed by VolumeShaperConfigurationOptionFlag. */
  public int optionFlags = 0;
  public double durationMs = 0.000000;
  public android.media.InterpolatorConfig interpolatorConfig;
  public static final android.os.Parcelable.Creator<VolumeShaperConfiguration> CREATOR = new android.os.Parcelable.Creator<VolumeShaperConfiguration>() {
    @Override
    public VolumeShaperConfiguration createFromParcel(android.os.Parcel _aidl_source) {
      VolumeShaperConfiguration _aidl_out = new VolumeShaperConfiguration();
      _aidl_out.readFromParcel(_aidl_source);
      return _aidl_out;
    }
    @Override
    public VolumeShaperConfiguration[] newArray(int _aidl_size) {
      return new VolumeShaperConfiguration[_aidl_size];
    }
  };
  @Override public final void writeToParcel(android.os.Parcel _aidl_parcel, int _aidl_flag)
  {
    int _aidl_start_pos = _aidl_parcel.dataPosition();
    _aidl_parcel.writeInt(0);
    _aidl_parcel.writeInt(type);
    _aidl_parcel.writeInt(id);
    _aidl_parcel.writeInt(optionFlags);
    _aidl_parcel.writeDouble(durationMs);
    _aidl_parcel.writeTypedObject(interpolatorConfig, _aidl_flag);
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
      type = _aidl_parcel.readInt();
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      id = _aidl_parcel.readInt();
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      optionFlags = _aidl_parcel.readInt();
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      durationMs = _aidl_parcel.readDouble();
      if (_aidl_parcel.dataPosition() - _aidl_start_pos >= _aidl_parcelable_size) return;
      interpolatorConfig = _aidl_parcel.readTypedObject(android.media.InterpolatorConfig.CREATOR);
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
    _mask |= describeContents(interpolatorConfig);
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