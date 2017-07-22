package com.mozz.indoor.poslearn;

/**
 * @author Yang Tao, 17/7/22.
 */

public class WiFi {

    static {
        System.loadLibrary("native-lib");
    }

    private String mWifi;

    public WiFi(String wifi) {
        mWifi = wifi;
    }

    public int encodeMac() {
        return encodeWifi(this.mWifi);
    }

    public static native int encodeWifi(String wifi);


}
