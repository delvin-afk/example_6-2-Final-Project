#include "mbed.h"
#include "arm_book_lib.h"
#include "ldr_sensor.h"
#include "siren.h"
#include "smart_home_system.h"


DigitalInOut oPiezo(PC_8);
DigitalInOut iPiezo(PC_9);


static int currentoPiezoTime = 0;
static int currentiPiezoTime = 0;

static bool sirenState = OFF;

void sirenInit()
{
    oPiezo.mode(OpenDrain);
    oPiezo.input();
    iPiezo.mode(OpenDrain);
    iPiezo.input();
}

bool sirenStateRead()
{
    return sirenState;
}

void sirenStateWrite( bool state )
{
    sirenState = state;
}


void oPiezoState()
{
    oPiezo.output();
    oPiezo = LOW;
    delay(100);
    oPiezo.input();
}


void iPiezoState()
{
    if( sirenState )
    {
        iPiezo.output();
        iPiezo = LOW;
        delay(100);
        iPiezo.input();
    } else {
        iPiezo.input();
    }
}
