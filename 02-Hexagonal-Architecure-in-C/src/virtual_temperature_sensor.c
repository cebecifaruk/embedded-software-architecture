#include "temperature_sensor.h"

#include <stdio.h>
#include <unistd.h>

double temp = 0;

float temperature_sensor_get_temperature() {
  // Simulate a delay to mimic sensor reading
  usleep(1000000); // Sleep for 1 second

  temp++;
  printf("Temp: %.2f\n", temp);
  return temp;
}
