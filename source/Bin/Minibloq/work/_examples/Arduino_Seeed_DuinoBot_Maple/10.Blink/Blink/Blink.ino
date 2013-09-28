#include <mbq.h>
void setup()
{
	initBoard();

	while(true)
	{
		DigitalWrite(D13_LED, true);
		delay(900);
		DigitalWrite(D13_LED, false);
		delay(300);
	}
}

void loop()
{
}
