#include "infrarojo.h"

rojo::rojo()
{
}
rojo::~rojo()
{
}
void rojo ::begin(uint8_t pin_read, uint8_t pin_write)
{
    _pin = pin_read;
    pinMode(pin_read, INPUT);
    pinMode(pin_write, OUTPUT);
    digitalWrite(pin_write, HIGH);
    current_time = millis();
    count = 0;
}
void rojo ::interrumpir()
{
    last_time = current_time;
    current_time = millis();
    elapsed_time = current_time - last_time;
    count++;   
}