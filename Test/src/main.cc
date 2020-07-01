#include <Arduino.h>

#ifdef PLATFORMIO_BUILD
#include <Test-Library.h>  // This is how PlatformIO sees and includes the library.
#endif


Test test;
void setup(){
	Serial.begin(9600);
	Serial.println(test.sum(1, 2));
	Serial.println(test.sum(90, 180));
	Serial.println(test.getSumation());
}


void loop(){
}
