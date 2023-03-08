#include "arm_book_lib.h"
#include "servo_door.h"
#include "mbed.h"
#include "rgb.h"


DigitalOut r(PA_0);
DigitalOut g(PD_12);
DigitalOut b(PB_4);
DigitalOut rgbLED[] = {r, b, g};


void toGreenRGBLED()
{
    r = 0.0;
    g = 1.0;
    b = 0.0;
}

void toRedRGBLED()
{
    r = 1.0;
    g = 0.0;
    b = 0.0;
}
