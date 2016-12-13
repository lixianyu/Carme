#include "mbed.h"
#include "TestCarme.h"
//PTD2->D2 : OK
//PTA2->D1 : OK
//PTA1->D0 : OK
//PTD3->D3 : OK
//PTE1->D4 : OK
//PTE0->D5 : OK
//PTD5->D6 : OK
//PTA5->D7 : OK
//PTA12->D8 : OK
//PTA13->D9 : OK
//PTC8->D10 : OK
//PTC7 not work
//PTC6->D11 : OK
//PTC5->D13 : OK
//DigitalOut led1(PTA1);

// main() runs in its own thread in the OS
// (note the calls to Thread::wait below for delays)
int main() {
	  int flag = 0;
    while (true) {
        //led1 = !led1;
        if (flag == 0)
        {
        	//led1 = 0;
        	test_copter(0);
        	flag = 1;
        	Thread::wait(3000);
        }
        else
        {
        	//led1 = 1;
        	test_copter(1);
        	flag = 0;
        	Thread::wait(100);
        }
        
    }
}

