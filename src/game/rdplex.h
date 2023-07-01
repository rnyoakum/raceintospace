#ifndef RDPLEX_H
#define RDPLEX_H

#include "display/palettized_surface.h"

#include "data.h"

char RD(char plr, int hardware = PROBE_HARDWARE,
        int unit = PROBE_HW_ORBITAL);
char QueryUnit(char hardware_index, char unit_index, char plr);
char MaxChk(char hardware_index, char unit_index, char plr);
uint8_t RDUnit(char hardwareTypeIndex, char hardwareIndex, char nRolls, char playerIndex);
char HPurc(char plr, int hardware = PROBE_HARDWARE,
           int unit = PROBE_HW_ORBITAL);

#endif // RDPLEX_H
