#include "temperature_controller.h"
#include "heating_driver.h"
#include "temperature_sensor.h"

#include <stdbool.h>

void temperature_controller_control(TemperatureController *this) {
  float temperature = temperature_sensor_get_temperature();

  if (temperature > this->setValue)
    heating_driver_set_heating(false);
  else if (temperature < this->setValue)
    heating_driver_set_heating(true);
}