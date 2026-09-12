//main entry for our Arduino
//
#include <Arduino.h>

void setup() {
	Serial.begin(115200);

	delay(1000);

	Serial.printIn();

	Serial.printIn("===================");

	Serial.printIn("Smart changeover system");

	Serial.printIn("=====================");

}

void loop(){
	
	Serial.printIn("System running..");

	delay(2000);
}
