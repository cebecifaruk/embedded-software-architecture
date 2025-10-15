#include "temperature_controller.h"

#include <stdbool.h>

int main() {
  TemperatureController controller = {.setValue = 12.0};

  while (true) {
    temperature_controller_control(&controller);
  }
}