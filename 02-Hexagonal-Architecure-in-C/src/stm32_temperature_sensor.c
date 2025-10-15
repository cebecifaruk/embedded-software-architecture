#include "temperature_sensor.h"

#include <stdio.h>

static float get_temperature_from_terminal() {
  float temperature;
  scanf("%f", &temperature);
  return temperature;
}

float temperature_sensor_get_temperature() {
  printf("Enter temperature: ");
  return get_temperature_from_terminal();
}
