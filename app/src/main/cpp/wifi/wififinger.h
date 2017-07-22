//
// Created by leeco on 17/7/21.
//

#ifndef INDOOR_WIFIFINGER_H
#define INDOOR_WIFIFINGER_H

#include "wifi.h"

typedef struct WifiFingerStruct {
    Wifi **wifis;
    int length;
} WifiFinger;

WifiFinger *init(unsigned int length);

int add(Wifi *wifi);

int addAt(unsigned int index, Wifi *wifi);

void destroyWifiFinger(WifiFinger *finger);

#endif //INDOOR_WIFIFINGER_H
