//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========

// Utilizamos 8 cables en paralelo para el display
// En display.cpp en la linea 60 se declaran los 8 puertos de salida
int main()
{
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}