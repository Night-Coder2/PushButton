#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H
#include <pico/stdlib.h>
#include <stdint.h>

uint64_t millis();

class PushButton
{
private:
    uint32_t pin;
    uint32_t state;
    bool isPullUp;
    bool internalPullUpActivated;
    unsigned long lastTimeStateChanged;
    unsigned long debounceDelay;

    void readState();

public:
    PushButton() {} // do not use
    PushButton(uint32_t pin, bool isPullUp, bool internalPullUpActivated);

    void init();

    bool isPressed();
};


#endif //PUSHBUTTON_H
