#include "mbed.h"
#include "arm_book_lib.h"
#include "rgb.h"
#include "servo_door.h"
// #include "ldr_sensor.h"

#define DUTY_MIN 0.025
#define DUTY_MAX 0.07   
#define PERIOD 0.02

PwmOut servo(PF_9);


DigitalOut testLED(LED2);   //can be used in the code below to test if code runs in this module

static void closeDoor();    //changed from lowerGate --> does nothing tbh

//servo_doorInit: changed from the servo_gateInit. Closes the door (move to original position)
void servo_doorInit()        
{
    toRedRGBLED();
    servo.period(PERIOD);
    servo.write(DUTY_MIN);
}

//opens door for 10 seconds; the function that calls openDoor should also call servo_doorInit to close the door 
void openDoor() //changed from raiseGate
{
    toGreenRGBLED();
    servo.write(DUTY_MAX);  
    delay(10000);
}
