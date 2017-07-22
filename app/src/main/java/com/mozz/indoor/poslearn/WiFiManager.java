package com.mozz.indoor.poslearn;

/**
 * @author Yang Tao, 17/7/22.
 */

public final class WiFiManager {
    private long mPtr;

    static {
        System.loadLibrary("native-lib");
    }

    public WiFiManager() {
        mPtr = this.nativeInit();
    }

    private native long nativeInit();
}
