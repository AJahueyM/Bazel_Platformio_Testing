#include <Arduino.h>

#ifdef PLATFORMIO_BUILD
#include <Test.h>  // This is how PlatformIO sees and includes the library.
#else
#include "src/test.h" // This is for native C++.
#endif


Testing test;
void setup(){
//	Serial.begin(9600);
}


void loop(){
}
