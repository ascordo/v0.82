#include <mbq.h>


DCMotor motor0(3, 4, 5);
DCMotor motor1(11, 10, 9);


void initBoard()
{
	Serial.begin(115200);

	//Uses the analog input 0, that may have the same value in some designs, but it's not so prabably:
	randomSeed(analogRead(0));

	//servo0.setPin(16);
	//servo1.setPin(17);

	//##This is for the Multiplo robots:
	//motor1.setClockwise(false);
}
