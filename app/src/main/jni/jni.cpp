#include "com_android_ndk_androidstudio_ndk_MainActivity.h"
#include <jni.h>
#include <string.h>
#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "NDK::Native", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "NDK::Native", __VA_ARGS__))

JNIEXPORT jstring JNICALL Java_com_android_ndk_androidstudio_1ndk_MainActivity_stringFromJNI
        (JNIEnv *env, jobject obj)
{
    LOGW("Java_com_android_ndk_androidstudio_1ndk_MainActivity_stringFromJNI()");

    return env->NewStringUTF("Hello from JNI !");
}