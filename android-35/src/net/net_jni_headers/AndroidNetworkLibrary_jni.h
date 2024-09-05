// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     third_party/jni_zero/jni_generator.py
// For
//     android/net/connectivity/org/chromium/net/AndroidNetworkLibrary

#ifndef android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_JNI
#define android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "third_party/jni_zero/jni_zero_helper.h"


// Step 1: Forward declarations.

JNI_ZERO_COMPONENT_BUILD_EXPORT extern const char
    kClassPath_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary[];
const char kClassPath_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary[] =
    "android/net/connectivity/org/chromium/net/AndroidNetworkLibrary";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_ZERO_COMPONENT_BUILD_EXPORT std::atomic<jclass>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(nullptr);
#ifndef android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz_defined
#define android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz_defined
inline jclass android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary,
      &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_addTestRootCertificate1(nullptr);
static void Java_AndroidNetworkLibrary_addTestRootCertificate(JNIEnv* env, const
    base::android::JavaRef<jbyteArray>& rootCert) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextUnchecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "addTestRootCertificate",
          "([B)V",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_addTestRootCertificate1);

     env->CallStaticVoidMethod(clazz,
          call_context.method_id, rootCert.obj());
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clearTestRootCertificates0(nullptr);
static void Java_AndroidNetworkLibrary_clearTestRootCertificates(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextUnchecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "clearTestRootCertificates",
          "()V",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clearTestRootCertificates0);

     env->CallStaticVoidMethod(clazz,
          call_context.method_id);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getCurrentDnsStatus0(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AndroidNetworkLibrary_getCurrentDnsStatus(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getCurrentDnsStatus",
          "()Landroid/net/connectivity/org/chromium/net/DnsStatus;",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getCurrentDnsStatus0);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getDnsStatusForNetwork1(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AndroidNetworkLibrary_getDnsStatusForNetwork(JNIEnv* env, jlong networkHandle) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getDnsStatusForNetwork",
          "(J)Landroid/net/connectivity/org/chromium/net/DnsStatus;",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getDnsStatusForNetwork1);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, networkHandle);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getIsCaptivePortal0(nullptr);
static jboolean Java_AndroidNetworkLibrary_getIsCaptivePortal(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getIsCaptivePortal",
          "()Z",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getIsCaptivePortal0);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getIsRoaming0(nullptr);
static jboolean Java_AndroidNetworkLibrary_getIsRoaming(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getIsRoaming",
          "()Z",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getIsRoaming0);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getMimeTypeFromExtension1(nullptr);
static base::android::ScopedJavaLocalRef<jstring>
    Java_AndroidNetworkLibrary_getMimeTypeFromExtension(JNIEnv* env, const
    base::android::JavaRef<jstring>& extension) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getMimeTypeFromExtension",
          "(Ljava/lang/String;)Ljava/lang/String;",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getMimeTypeFromExtension1);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, extension.obj()));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getNetworkOperator0(nullptr);
static base::android::ScopedJavaLocalRef<jstring>
    Java_AndroidNetworkLibrary_getNetworkOperator(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getNetworkOperator",
          "()Ljava/lang/String;",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getNetworkOperator0);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getUserAddedRoots0(nullptr);
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_AndroidNetworkLibrary_getUserAddedRoots(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getUserAddedRoots",
          "()[[B",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getUserAddedRoots0);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getWifiSSID0(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_AndroidNetworkLibrary_getWifiSSID(JNIEnv*
    env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getWifiSSID",
          "()Ljava/lang/String;",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getWifiSSID0);

  jstring ret =
      static_cast<jstring>(env->CallStaticObjectMethod(clazz,
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getWifiSignalLevel1(nullptr);
static jint Java_AndroidNetworkLibrary_getWifiSignalLevel(JNIEnv* env, JniIntWrapper countBuckets) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getWifiSignalLevel",
          "(I)I",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_getWifiSignalLevel1);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id, as_jint(countBuckets));
  return ret;
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_haveOnlyLoopbackAddresses0(nullptr);
static jboolean Java_AndroidNetworkLibrary_haveOnlyLoopbackAddresses(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "haveOnlyLoopbackAddresses",
          "()Z",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_haveOnlyLoopbackAddresses0);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_isCleartextPermitted1(nullptr);
static jboolean Java_AndroidNetworkLibrary_isCleartextPermitted(JNIEnv* env, const
    base::android::JavaRef<jstring>& host) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "isCleartextPermitted",
          "(Ljava/lang/String;)Z",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_isCleartextPermitted1);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id, host.obj());
  return ret;
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_reportBadDefaultNetwork0(nullptr);
static jboolean Java_AndroidNetworkLibrary_reportBadDefaultNetwork(JNIEnv* env) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "reportBadDefaultNetwork",
          "()Z",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_reportBadDefaultNetwork0);

  jboolean ret =
      env->CallStaticBooleanMethod(clazz,
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_setWifiEnabledForTesting1(nullptr);
static void Java_AndroidNetworkLibrary_setWifiEnabledForTesting(JNIEnv* env, jboolean enabled) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "setWifiEnabledForTesting",
          "(Z)V",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_setWifiEnabledForTesting1);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, enabled);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_tagSocket3(nullptr);
static void Java_AndroidNetworkLibrary_tagSocket(JNIEnv* env, JniIntWrapper ifd,
    JniIntWrapper uid,
    JniIntWrapper tag) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "tagSocket",
          "(III)V",
          &g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_tagSocket3);

     env->CallStaticVoidMethod(clazz,
          call_context.base.method_id, as_jint(ifd), as_jint(uid), as_jint(tag));
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_verifyServerCertificates3(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_AndroidNetworkLibrary_verifyServerCertificates(JNIEnv* env, const
    base::android::JavaRef<jobjectArray>& certChain,
    const base::android::JavaRef<jstring>& authType,
    const base::android::JavaRef<jstring>& host) {
  jclass clazz = android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "verifyServerCertificates",
"([[BLjava/lang/String;Ljava/lang/String;)Landroid/net/connectivity/org/chromium/net/AndroidCertVerifyResult;",
&g_android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_verifyServerCertificates3);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, certChain.obj(), authType.obj(), host.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

#endif  // android_net_connectivity_org_chromium_net_AndroidNetworkLibrary_JNI