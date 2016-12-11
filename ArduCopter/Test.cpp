#include "mbed.h"

DigitalOut led1(PTA1);
void test_copter(int led)
{
	led1 = led;
}