#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
  private:
    byte pin;
    bool state;
  public:
    LED();
    LED(byte pin);

    void init();
    void on();
    void off();
    void toggle();

    bool current_state();
};

#endif