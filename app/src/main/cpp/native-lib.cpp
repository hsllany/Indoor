#include <jni.h>
#include <string>



extern "C"
JNIEXPORT jstring JNICALL
Java_com_mozz_indoor_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jlong JNICALL
Java_com_mozz_indoor_poslearn_WiFiManager_nativeInit(JNIEnv *env, jobject object) {

}