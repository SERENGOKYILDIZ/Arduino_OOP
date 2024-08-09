#include "LED.h"

LED::LED()
{

}

LED::LED(byte pin)
{
  this->pin = pin;
}

void LED::init()
{
  pinMode(this->pin, OUTPUT);
}

void LED::on()
{
  this->state = true;
  digitalWrite(this->pin, this->state);
}

void LED::off()
{
  this->state = false;
  digitalWrite(this->pin, this->state);
}

void LED::toggle()
{
  this->state = !this->state;
  digitalWrite(this->pin, this->state);
}

bool LED::current_state()
{
  return this->state;
}