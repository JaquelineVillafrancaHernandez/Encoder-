#ifndef _infrarojo_h
#define _infrarojo_h

#include <Arduino.h>

class rojo
{
public:
    rojo();
    ~rojo();
    void begin(uint8_t pin_read, uint8_t pin_write);
    void interrumpir();
    ulong elapsed_time;
    ulong last_time;
    ulong current_time;
    ulong count;

private:
    uint8_t _pin;
};

#endif
