#ifndef _HARDWARE_H
#define _HARDWARE_H

#include <avr/io.h>

#define MOTOR_FORWARD_PORT PORTE
#define MOTOR_FORWARD_DDR DDRE
#define MOTOR_FORWARD_BIT PE6

#define MOTOR_BACKWARD_PORT PORTE
#define MOTOR_BACKWARD_DDR DDRE
#define MOTOR_BACKWARD_BIT PE7

#define MOTOR_SENSOR_ENABLE_PORT PORTE
#define MOTOR_SENSOR_ENABLE_DDR DDRE
#define MOTOR_SENSOR_ENABLE_BIT PE2

#define MOTOR_SENSOR_PIN PINE
#define MOTOR_SENSOR_DDR DDRE
#define MOTOR_SENSOR_BIT PE3

#define MOTOR_RESET_STEP_DURATION 1000
#define MOTOR_CURRENT_LIMIT 940

#define THERMOMETER_ENABLE_PORT PORTF
#define THERMOMETER_ENABLE_DDR DDRF
#define THERMOMETER_ENABLE_BIT PF3

#endif /* #ifndef _HARDWARE_H */

