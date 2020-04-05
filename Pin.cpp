#include "Arduino.h"
#include "Pin.h"

Pin::Pin()
{
}

Pin::Pin(int pin)
{
    _pin = pin;
}

void Pin::mode(int mode)
{
    _mode = mode;
}

void Pin::on()
{
    digitalWrite(_pin, HIGH);
    Serial.println(_pin);
}

void Pin::off()
{
    digitalWrite(_pin, LOW);
    Serial.println(_pin);
}

void Pin::blink(int duration)
{
    Pin::on();

    delayMicroseconds(duration);
    Serial.println(_pin);
    Pin::off();
    delayMicroseconds(duration);
    Serial.println(_pin);
    
}

void Pin::ativo(int duration)
{
    Pin::on();
    delayMicroseconds(duration);
    Serial.println(_pin);
}

void Pin::inativo(int duration)
{
    Pin::off();
    delayMicroseconds(duration);
    Serial.println(_pin);
}

Pin::~Pin()
{
    // TODO Auto-generated destructor stub
}
