#include <infrarojo.h>
#include <Arduino.h>

rojo infrarojo;
const byte pro_read = 32;
const byte pro_write = 33;

bool flag;
void IRAM_ATTR isr()
{
  flag = true;
}

void setup()
{
  Serial.begin(115200);
  infrarojo.begin(pro_read, pro_write);
  attachInterrupt(pro_read, isr, RISING);
}

void loop()
{
  if (flag)
  {
    infrarojo.interrumpir();
    Serial.printf("%lu,%lu\n",infrarojo.elapsed_time,infrarojo.count);
    flag = false;
  }
}