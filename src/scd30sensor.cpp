#if (HAS_SCD30)

// Local logging tag
static const char TAG[] = __FILE__;

#include "scd30sensor.h"

SCD30 airSensor;

// initialize SCD30 sensor
int scd30_init(void) {
  Wire1.begin(); //Start the wire hardware that may be supported by your platform

  if (airSensor.begin(Wire1) == false) //Pass the Wire port to the .begin() function
  {
    Serial.println("Air sensor not detected. Please check wiring. Freezing...");
  }
}

uint16_t scd30_getCO2(void) {
  uint16_t co2 = airSensor.getCO2();
  ESP_LOGI(TAG, "CO2: %d", co2);
  return co2;
}

#endif // HAS_SCD30
