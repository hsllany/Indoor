//
// Created by leeco on 17/7/22.
//

#include <jni.h>
#include "wifi.h"

JNIEXPORT jint JNICALL
Java_com_mozz_indoor_poslearn_WiFi_encodeWifi(JNIEnv *env, jclass type, jstring wifi_) {
    const char *wifi = env->GetStringUTFChars(wifi_, 0);
    unsigned long length = sizeof(wifi) / sizeof(char);


    int encodedWifi = encodeMac(wifi, length);


    env->ReleaseStringUTFChars(wifi_, wifi);
}

