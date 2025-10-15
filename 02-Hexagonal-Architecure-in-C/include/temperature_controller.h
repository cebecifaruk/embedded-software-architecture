#ifndef _TEMPERATURE_CONTROLLER_H_
#define _TEMPERATURE_CONTROLLER_H_

typedef struct {
  double setValue;
} TemperatureController;

void temperature_controller_control(TemperatureController *this);

#endif