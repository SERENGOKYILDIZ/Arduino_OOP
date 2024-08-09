#include "LED.h"

LED my_led(12);

void setup() {
  my_led.init();
}

void loop() {
  my_led.on();
  delay(3000);
  my_led.off();
  delay(1000);
  my_led.toggle();
  delay(300);
}
