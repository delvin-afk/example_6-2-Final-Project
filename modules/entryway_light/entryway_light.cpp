
#include "ldr_sensor.h"
#include "mbed.h"
#include "arm_book_lib.h"
#include "ldr_sensor.h"
#include "smart_home_system.h"


DigitalOut eLED(PE_10);


void entrywayLEDon()
{
  while (true)
  {
    eLED = ON;
  }
}


void entrywayLEDoff()
{
  while (true)
  {
    eLED = OFF;
  }
}
