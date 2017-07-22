//
// Created by leeco on 17/7/21.
//

#include "wifi.h"

int encodeMac(const char *mac_address, unsigned long length) {
    if (mac_address == NULL || length != 17) {
        return 0;
    }

    int macEncoded = 0;

    int singleMacItem = 0;
    for (int i = 0; i < length; i++) {
        char c = *(mac_address + i);
        if (c == ':') {
            macEncoded = (macEncoded << 8) | (singleMacItem & 0xff);
        } else {
            int mac_single = (c - '0');
            singleMacItem += singleMacItem * 16 + mac_single;
        }
    }

    macEncoded = (macEncoded << 8) | (singleMacItem & 0xff);
    return macEncoded;
}

Wifi *initWifi(int mac_address, unsigned int level, unsigned long timestamp) {
    Wifi *wifi = malloc(sizeof(Wifi));
    wifi->level = level;
    wifi->mac_address = mac_address;
    wifi->timestamp = timestamp;
    return wifi;
}

Wifi *
initWifi2(const char *mac_adress, unsigned long length, unsigned int level, unsigned timestamp) {
    return initWifi(encodeMac(mac_adress, length), level, timestamp);
}

void destroyWifi(Wifi *wifi) {
    free(wifi);
}