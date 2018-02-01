#ifndef TU_GPIO_H_
#define TU_GPIO_H_

#include "TU_options.h"

// @TODO: Figure this out
#ifdef FLIP_180
#define CV1 A3
#define CV2 A6
#define CV3 A5
#define CV4 A4

#define TR1 0
#define TR2 1 // reset
#else
#define CV1 A3
#define CV2 A6
#define CV3 A5
#define CV4 A4

#define TR1 0
#define TR2 1 // reset
#endif

// outputs, tact buttons:
#ifdef _TEMPS_UTILE_REV_0
  #define CLK1 29
  #define CLK2 28
  #define CLK3 10
  #define CLK4 A14
  #define CLK5 2
  #define CLK6 9
  
  #define but_top 5
  #define but_bot 4 
#else
  #define CLK1 5
  #define CLK2 6
  #define CLK3 7
  #define CLK4 A14 // DAC channel; alt = 29
  #define CLK5 8
  #define CLK6 2
  
  #define but_top 3
  #define but_bot 12
#endif

// OLED com: 
#ifdef _TEMPS_UTILE_REV_0
  #define OLED_DC 6
  #define OLED_RST 7
  #define OLED_CS 8
#else
  #define OLED_DC 9
  #define OLED_RST 4
  #define OLED_CS 10
#endif

// OLED CS is active low
#define OLED_CS_ACTIVE LOW
#define OLED_CS_INACTIVE HIGH

#ifdef FLIP_180
  #define encR1 21
  #define encR2 22
  #define butR  23

  #define encL1 16
  #define encL2 15
  #define butL  13
#else
  #define encR1 15
  #define encR2 16
  #define butR  13

  #define encL1 22
  #define encL2 21
  #define butL  23
#endif

#define TU_GPIO_DEBUG_PIN1 30
#define TU_GPIO_DEBUG_PIN2 29 // available on PCB

#define TU_GPIO_BUTTON_PINMODE INPUT_PULLUP
#define TU_GPIO_TRx_PINMODE INPUT_PULLUP
#define TU_GPIO_ENC_PINMODE INPUT_PULLUP
#define TU_GPIO_OUTPUTS_PINMODE OUTPUT

#endif // TU_GPIO_H_
