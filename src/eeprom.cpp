#include "eeprom.h"

void begin() { EEPROM.begin(4095); }

void end() { EEPROM.end(); }
