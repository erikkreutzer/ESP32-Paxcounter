#ifndef _SCD30SENSOR_H
#define _SCD30SENSOR_H

#include <Wire.h>
#include "SparkFun_SCD30_Arduino_Library.h"
#include "globals.h"

int scd30_init();
uint16_t scd30_getCO2(void);

#endif
