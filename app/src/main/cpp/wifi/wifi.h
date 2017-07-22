//
// Created by leeco on 17/7/21.
//

#ifndef INDOOR_WIFI_H
#define INDOOR_WIFI_H

#include <stdlib.h>

typedef struct WifiStruct {
    int mac_address;
    unsigned int level;
    unsigned long timestamp;
} Wifi;

int encodeMac(const char *, unsigned long);

Wifi *initWifi(int mac_address, unsigned int level, unsigned long timestamp);

Wifi *
initWifi2(const char *mac_adress, unsigned long length, unsigned int level, unsigned timestamp);

void destroyWifi(Wifi *wifi);

#endif //INDOOR_WIFI_H
