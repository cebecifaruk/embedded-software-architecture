#include "temperature_controller.h"
#include <assert.h>
#include <stdio.h>

int main() {
  TemperatureController controller = {.setValue = 12.0};

  temperature_controller_control(&controller);
  temperature_controller_control(&controller);
  temperature_controller_control(&controller);
  temperature_controller_control(&controller);
  temperature_controller_control(&controller);

  printf("Testing completed successfully.\n");
}