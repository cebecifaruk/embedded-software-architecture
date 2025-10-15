#include "heating_driver.h"

#include <stdio.h>

void heating_driver_set_heating(bool state) {
  if (state)
    printf("Heating works now\n");
  else
    printf("Heating closed now\n");
}
