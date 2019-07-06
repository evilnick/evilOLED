#include <evilOLED.h>

void setup() {
	// set SDA + SCL pins as output
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);

}

void loop() {
	evilOLED disp(8, 9); // initialize the display (SDA,SCL)
	delay(1000);

	disp.cls(0x00); // clears screen
	delay(500);

	disp.setCursor(5, 2); // sets text cursor (x,y)
	disp.putString("HELLO WORLD"); // Strings MUST be double quoted and capitalized if using default font
	delay(500);

	disp.alert(120); // flashes display 3 times
	delay(1500);

	disp.setCursor(5, 4);
	disp.putString(12345); // putString also accepts ints
	delay(1500);
}
















