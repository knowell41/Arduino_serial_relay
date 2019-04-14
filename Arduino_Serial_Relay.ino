

#include <SoftwareSerial.h>

SoftwareSerial sim808(10, 11);

void setup()
{
sim808.begin(9600);               // the GPRS/GSM baud rate   
Serial.begin(9600);                 // the GPRS/GSM baud rate   
}

void loop()
{
if(Serial.available())

sim808.print((char)Serial.read());

else  if(sim808.available())

Serial.print((char)sim808.read());
}
