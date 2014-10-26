#include "evilOLED.h"

const char fb[1024] PROGMEM = {
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00010000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00010000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00010000, B00000000, B01000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00010000, B00000000, B00000000, B00000000, B00010000, B00000000, B01000000, B00000000, 
B00010001, B00000000, B01000100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B00010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B00010001, B00000000, B01000100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B00010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B00010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010101, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010100, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010101, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010001, B00000000, B01010101, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010101, B00000000, B01010101, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010101, B00000000, B01010101, B00000000, B01010001, B00000000, B01010100, B00000000, 
B01010101, B00000000, B01010101, B00000000, B01010001, B00100000, B01010101, B00000000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B00100010, B01010101, B10000000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B00100010, B01010101, B10000000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B00100010, B01010101, B10101000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B00100010, B01010101, B10001000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B00100010, B01010101, B10101000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B00100010, B01010101, B10101000, 
B01010101, B00100010, B01010101, B10001000, B01010101, B10100010, B00000001, B11111000, 
B11111001, B11111010, B11111001, B11111000, B01111001, B11111010, B11111001, B11111000, 
B11111001, B11111010, B11111001, B11111000, B01111001, B10111010, B10011001, B10011000, 
B01111001, B11111010, B11111001, B00000000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B00100010, B01010101, B10101000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B00100010, B01010101, B10101000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B10100010, B01010101, B10101000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B00100010, B01010101, B10101000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B10100010, B01010101, B10101000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B10100010, B01010101, B10101000, B01010101, B10100010, B01010101, B10101000, 
B01010101, B10101010, B01010101, B10101010, B01010101, B10111010, B01010101, B10101010, 
B01010101, B10101010, B01010101, B10101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10101010, B01010101, B10101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111010, B01010101, B10101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10101010, B01010101, B10101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111010, B01010101, B10101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111010, B01010101, B10101010, B01010101, B10111010, B00000000, B11111111, 
B11111111, B11111011, B11111101, B11001110, B11001110, B11001110, B11001100, B11111111, 
B11111111, B11111111, B11111111, B11111100, B11001110, B11001111, B11001111, B11001111, 
B11111111, B11111111, B11111111, B00000000, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111010, B01010101, B11101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111011, B01010101, B11101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111010, B01010101, B11101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111011, B01010101, B11101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111011, B01010101, B11101010, B01010101, B10111010, B01010101, B11101010, 
B01010101, B10111011, B01010101, B11101110, B01010101, B10111010, B01010101, B11101010, 
B01010101, B11111011, B01010101, B11111111, B01010101, B11111011, B01010101, B11111110, 
B01010101, B11111011, B01010101, B11111111, B01010101, B11111011, B01010101, B11111110, 
B01010101, B11111011, B01010101, B11111111, B01010101, B11111011, B01010101, B11111110, 
B01010101, B11111011, B01010101, B11111111, B01010101, B11111011, B01010101, B11111110, 
B01010101, B11111111, B01010101, B11111111, B01110101, B11111011, B01010101, B11111111, 
B01010101, B11111111, B01010101, B11111111, B01010101, B11111011, B01010101, B11111110, 
B01010101, B11111111, B01010101, B11111111, B01110101, B11111011, B00000000, B11111111, 
B11111111, B11111111, B11111111, B11110111, B11110111, B11110111, B11110111, B10110111, 
B00110111, B10110111, B11110111, B11110111, B11110111, B11110111, B11110111, B11111111, 
B11111111, B11111111, B11111111, B00000000, B01110101, B11111011, B11010101, B11111111, 
B01010101, B11111111, B01010101, B11111111, B01110101, B11111111, B11010101, B11111111, 
B01010101, B11111111, B01010101, B11111111, B01110101, B11111111, B11010101, B11111111, 
B01110101, B11111111, B01010101, B11111111, B01110101, B11111111, B11010101, B11111111, 
B01110101, B11111111, B01010101, B11111111, B01110101, B11111111, B11010101, B11111111, 
B01110101, B11111111, B11010101, B11111111, B01110101, B11111111, B11010101, B11111111, 
B01110101, B11111111, B11010101, B11111111, B01110101, B11111111, B11010101, B11111111, 
B11110111, B11111111, B11111101, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11110111, B11111111, B11111101, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11110111, B11111111, B11111101, B11111111, B11110111, B11111111, B11111101, B11111111, 
B01110111, B01111111, B00111101, B00111111, B00110111, B00111111, B00111101, B00111111, 
B01110111, B01111111, B11111101, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11110111, B11111111, B11111101, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11110111, B11111111, B11111101, B11111111, B11110111, B11111111, B11111100, B11111101, 
B11110101, B11111101, B11111101, B11111101, B11110101, B11111101, B10011101, B10011101, 
B11110101, B11111101, B11111101, B00011101, B00010101, B11111101, B11111101, B11111101, 
B11110101, B11111101, B11111101, B11111100, B11110111, B11111111, B11111101, B11111111, 
B11110111, B11111111, B11111111, B10011111, B10010111, B11111111, B11111101, B11111111, 
B11110111, B11111111, B11111111, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11110111, B00011111, B00011111, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11110111, B11111111, B11111101, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11110111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B00000111, B00000001, B11110000, 
B11111100, B11111110, B00001110, B00000111, B01100111, B01101111, B00000111, B00000111, 
B01111111, B01111110, B00111000, B10000001, B11000011, B11111111, B11111111, B00001111, 
B00000011, B10010011, B10011001, B10011001, B10011001, B10011001, B10010001, B10000011, 
B10000111, B11111111, B11111001, B11100001, B00000111, B00011111, B11111111, B11111111, 
B00011111, B00000111, B11100001, B11111001, B11111111, B11111111, B00000001, B00000001, 
B11111111, B11111111, B11111111, B00000000, B00000000, B11111111, B11111111, B11111111, 
B00000001, B00000001, B11110011, B11111001, B11111001, B11110001, B00000001, B00000111, 
B11111111, B11111111, B11111111, B00000001, B00000001, B11111111, B11111111, B00001111, 
B00000011, B11110011, B11111001, B11111001, B11111001, B11111001, B11110011, B11111111, 
B11111111, B00000000, B00000000, B10011111, B00001111, B01100111, B11110011, B11111001, 
B11111101, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111110, B11111000, B11110000, 
B11100011, B11100111, B11000111, B11001110, B11001110, B11001111, B11001110, B11100110, 
B11100110, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111100, B11111100, B11111001, B11111001, B11111001, B11111001, B11111001, B11111001, 
B11111100, B11111111, B11111111, B11111111, B11111111, B11111100, B11111000, B11111000, 
B11111100, B11111111, B11111111, B11111111, B11111111, B11111111, B11111000, B11111000, 
B11111111, B11111111, B11111111, B11111000, B11111000, B11111111, B11111111, B11111111, 
B11111000, B11111000, B11111111, B11111111, B11111111, B11111111, B11111000, B11111000, 
B11111111, B11111111, B11111111, B11111000, B11111000, B11111111, B11111111, B11111111, 
B11111100, B11111100, B11111001, B11111001, B11111001, B11111001, B11111100, B11111111, 
B11111111, B11111000, B11111000, B11111111, B11111111, B11111110, B11111100, B11111001, 
B11111011, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111
};


static const char font_bmap[64*8] PROGMEM =
{
B00011100, B00100010, B01010001, B01001001, B01000101, B00100010, B00011100, B00000000, 
B00000000, B01000010, B01000001, B01111111, B01000000, B01000000, B00000000, B00000000, 
B00000000, B01000010, B01100001, B01110001, B01011001, B01001101, B01000110, B00000000, 
B00000000, B01000001, B01000001, B01001001, B01001001, B00110110, B00000000, B00000000, 
B00000000, B00011100, B00010010, B00010001, B01111111, B00010000, B00010000, B00000000, 
B00000000, B00001111, B01001001, B01001001, B01001001, B01001001, B00110001, B00000000, 
B00000000, B00111000, B01000100, B01001010, B01001001, B01001001, B00110000, B00000000, 
B00000000, B00000001, B00001001, B01001001, B00110001, B00001001, B00000111, B00000000, 
B00000000, B00110110, B01001001, B01001001, B01001001, B01001001, B00110110, B00000000, 
B00000000, B00000110, B01001001, B01001001, B00101001, B00010101, B00001110, B00000000, 
B00000000, B00000000, B00000000, B00010100, B00000000, B00000000, B00000000, B00000000, 
B01010101, B10101010, B11010101, B11101010, B11110101, B11111010, B11111101, B11111110, 
B00000000, B00000000, B00001000, B00010100, B00100010, B00000000, B00000000, B00000000, 
B00000000, B00010100, B00010100, B00010100, B00010100, B00000000, B00000000, B00000000, 
B00000000, B00100010, B00010100, B00001000, B00000000, B00000000, B00000000, B00000000, 
B00000000, B00000000, B00000010, B01010001, B01010001, B00001011, B00000110, B00000000, 
B00000000, B00100010, B00010100, B00001000, B00010100, B00100010, B00000000, B00000000, 
B01111100, B00001010, B00001001, B00001001, B00001010, B01111100, B00000000, B00000000, 
B01111111, B01001001, B01001001, B01001001, B01001001, B00110110, B00000000, B00000000, 
B00111110, B01000001, B01000001, B01000001, B01000001, B00100010, B00000000, B00000000, 
B01111111, B01000001, B01000001, B01000001, B01100011, B00111110, B00000000, B00000000, 
B01111111, B01001001, B01001001, B01001001, B01000001, B01000001, B00000000, B00000000, 
B00000000, B01111111, B00001001, B00001001, B00001001, B00000001, B00000001, B00000000, 
B00000000, B00011110, B00100001, B01000001, B01001001, B00111001, B00000000, B00000000, 
B00000000, B01111111, B00001000, B00001000, B00001000, B00001000, B01111111, B00000000, 
B00000000, B01000001, B01000001, B01111111, B01000001, B01000001, B00000000, B00000000, 
B01000001, B01000001, B01100001, B00111111, B00000001, B00000001, B00000000, B00000000, 
B01111111, B00001000, B00001100, B00010010, B01100001, B00000000, B00000000, B00000000, 
B00000000, B01111111, B01000000, B01000000, B01000000, B01000000, B00000000, B00000000, 
B01111111, B00000010, B00000100, B00001000, B00000100, B00000010, B01111111, B00000000, 
B01111111, B00000110, B00001100, B00011000, B00110001, B01111111, B00000000, B00000000, 
B00000000, B00011100, B00100010, B01000001, B01000001, B00100010, B00011100, B00000000, 
B00000000, B01111111, B00001001, B00001001, B00001001, B00000110, B00000000, B00000000, 
B00000000, B00111110, B01000001, B11000001, B01110001, B01000011, B00111110, B00000000, 
B00000000, B01111111, B00001001, B00001001, B00011001, B01100110, B00000000, B00000000, 
B00000000, B00100110, B01001001, B01001001, B01001001, B00110010, B00000000, B00000000, 
B00000000, B00000001, B00000001, B01111111, B00000001, B00000001, B00000000, B00000000, 
B00000000, B00000000, B00111111, B01000000, B01000000, B01000000, B00111111, B00000000, 
B00000000, B00000011, B00001100, B00110000, B01000000, B00110000, B00001100, B00000011, 
B00000000, B01111111, B01000000, B00111000, B01000000, B01111111, B00000000, B00000000, 
B01100011, B00110110, B00011100, B00011100, B00110110, B01100011, B00000000, B00000000, 
B00000000, B01000011, B01100110, B00111100, B00011000, B00001100, B00000111, B00000000, 
B00000000, B01101001, B01111001, B01011001, B01001101, B01001111, B01001011, B00000000, 
B00000000, B00000000, B01000001, B01000001, B01111111, B00000000, B00000000, B00000000, 
B00011000, B00111100, B00111100, B00111100, B00111100, B00111100, B00111100, B00000000, 
B00000000, B00000000, B01111111, B01000001, B01000001, B00000000, B00000000, B00000000, 
B00111100, B01000010, B10111101, B10110101, B10101101, B10100001, B00111111, B00000000, 
B00000000, B01111110, B01111110, B01111110, B01111110, B01111110, B01111110, B00000000, 
B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, B00000000, 
B01010101, B10101010, B01010101, B10101010, B01010101, B10101010, B01010101, B10101010, 
B00000000, B00000000, B00111110, B00110110, B00100010, B00110110, B00111110, B00000000, 
B00011100, B00110110, B00110110, B00110110, B00110110, B00011100, B00000000, B00000000, 
B11111111, B10000001, B10000001, B10000001, B10000001, B10000001, B10000001, B11111111, 
B00000000, B01111110, B01000010, B01000010, B01000010, B01000010, B01111110, B00000000, 
B00000000, B01111110, B01000010, B01011010, B01011010, B01000010, B01111110, B00000000, 
B00000000, B01111110, B01100010, B01010010, B01001010, B01000110, B01111110, B00000000, 
B00000000, B01000000, B01100000, B01110000, B01111000, B01111100, B01111110, B00000000, 
B00011000, B00011000, B00011000, B01011010, B01111110, B00111100, B00011000, B00000000, 
B00000000, B00001111, B00011000, B11111111, B11111000, B00011111, B00000000, B00000000, 
B01111110, B01100110, B01111110, B01100111, B01111110, B01100110, B01111111, B00000000, 
B01010101, B01111111, B01010101, B01111111, B01010101, B01111111, B01010101, B01111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, 
B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111, B11111111 
};


evilOLED::evilOLED(char sda, char scl)

{
	_sda = sda;
	_scl = scl;
        int _col = 0x00;
        int _row = 0x00;
        init();
        cls(0xff);
        splash();
        //sendCmd(0x00);//set page mode
	//sendCmd(0x00);//low column
       // sendCmd(0x10);//high column
        //sendCmd(0xB0);//page address
        delay(1000);
}

void evilOLED::dataStart()
{
	digitalWrite(_scl, HIGH);
	digitalWrite(_sda, HIGH);
	digitalWrite(_sda, LOW);
	digitalWrite(_scl, LOW);
}

void evilOLED::dataStop()
{
	digitalWrite(_scl, LOW);
	digitalWrite(_sda, LOW);
	digitalWrite(_scl, HIGH);
	digitalWrite(_sda, HIGH);
}

void evilOLED::sendByte(unsigned char data)

{
	char i;
	for(i=0;i<8;i++)
	{
		if((data << i) & 0x80){
			digitalWrite(_sda, HIGH);
		}else{
			digitalWrite(_sda, LOW);
		}
		digitalWrite(_scl, HIGH);
		digitalWrite(_scl, LOW);
	}
	digitalWrite(_sda, HIGH);
	digitalWrite(_scl, HIGH);
	digitalWrite(_scl, LOW);
}

void evilOLED::sendCmd(unsigned char cmd)

{
	dataStart();
	sendByte(_slave_address);  //0x78 or 0x79
	sendByte(0x00);	//write command
	sendByte(cmd);
	dataStop();
}


void evilOLED::cls(char b=0x00) 
{
         sendCmd(0x20);
         sendCmd(0x00);
         dataStart();
         sendByte(_slave_address);
         sendByte(0x40);
         for (unsigned int n=0;n<1024;n++)
         {
            sendByte(b);
         }
         dataStop();
}

void evilOLED::setCursor(char x, char y)
{
        _row= (
           (y >7)
           ? 7
           : y
           );

        _col=(
           (x > 15)
           ? 15
           : x
           );
        sendCmd(0xB0+_row); //set page from row
        sendCmd(0x00+(_col & 0x01)*8);
        sendCmd(0x10+(_col>>1));
        
}

void evilOLED::putChar(char c)
  {
    //assumes cursor is set to correct place
    if ( c == 0x20) // trap SPACE character
    { 
        c = 0x30; //this is where I put it
    }
    else
    {
        c -= 0x30;
    }
    dataStart();
    sendByte(0x78);
    sendByte(0x40);    
    
    for (char i=0; i<8; i++)
    {     
      sendByte(pgm_read_byte(&(font_bmap[8*c+i])));
    }
    dataStop();
  }


void evilOLED::putString(char* s)
  {
    //assumes cursor is set to correct place
    dataStart();
    sendByte(0x78);
    sendByte(0x40);
    int index =0;
    char c;
    while(*(s+index) != 0x00) {
    
      if ( *(s+index) == 0x20) // trap SPACE character
      { 
        c = 0x30; //this is where I put it
      }
      else
      {
        c = (*(s+index)-0x30);
      }
    
    
      for (char i=0; i<8; i++)
      {     
      sendByte(pgm_read_byte(&(font_bmap[8*c+i])));
      }
      index++;
    }
    dataStop();
  }
void evilOLED::putString(int s)
  {
     char buffer[16];
     itoa(s, buffer,10);
     putString(buffer);
  }

void evilOLED::flash(int d) 
{
       sendCmd(0xA7);
       delay(d);
       sendCmd(0xA6);
       delay(d); 
}


void evilOLED::alert(int d) 
{   
       flash(d);
       flash(d/2);
       flash(d/2);
}
void evilOLED::splash () 
{
         int index = 0;
         sendCmd(0x00);// -> page mode
         sendCmd(0x00);// lower page
         sendCmd(0x07);
         for (int p=0; p<8;p++){
          sendCmd(0xb0 + p);
          sendCmd(0x00);
          sendCmd(0x10);
          dataStart();
          sendByte(0x78);
          sendByte(0x40);
          
          for (int n=0;n<128;n++)
          {
            sendByte(pgm_read_byte(&(fb[index++])));
         
          }
          dataStop();
          
         }
}












void evilOLED::init()

{
  //write command to the screen registers.

//	sendCmd(0xAE);//display off
//	sendCmd(0xD5);//clockdivider
//        sendCmd(0x80);//  -> ratio 0x80
//        sendCmd(0xA8);// set multiplex
//        sendCmd(0x3f);//  -> 63
//        sendCmd(0xD3);//display offset
//        sendCmd(0x00);// -> no offset
//        sendCmd(0xC8);//scan mode
//        sendCmd(0xDA);// com hardware
//        sendCmd(0x00);
//        sendCmd(0x8D);//Charge pump setting
//        sendCmd(0x14);// -> on!
//        sendCmd(0x20);//memory mode
//        sendCmd(0x00);// -> page mode
//        sendCmd(0x00);// lower page
//        sendCmd(0x10);// upper page
//        sendCmd(0x81);//Contrast
//        sendCmd(0xC0);// -> high
//        sendCmd(0xD9);//precharge
//        sendCmd(0xF1);// --> high
//        sendCmd(0x40);//Ram register
//        sendCmd(0xDB);// VCOMMH deselect
//        sendCmd(0x20);// -->0.77xVcc
//        sendCmd(0xAF);//display on     
//        
//        
//        
//        
//        
//        
//        
//        
//        
//        
//      
        sendCmd(0xAE);//display off
	sendCmd(0x00);//Set Memory Addressing Mode
	sendCmd(0x10);//00,Horizontal Addressing Mode;01,Vertical Addressing Mode;10,Page Addressing Mode (RESET);11,Invalid
	sendCmd(0x40);//Set Page Start Address for Page Addressing Mode,0-7
	sendCmd(0xB0);//Set COM Output Scan Direction
	sendCmd(0x81);//---set low column address
	sendCmd(0xCF);//---set high column address
	sendCmd(0xA1);//--set start line address
	sendCmd(0xA6);//--set contrast control register
	sendCmd(0xA8);
	sendCmd(0x3F);//--set segment re-map 0 to 127
	sendCmd(0xC8);//--set normal display
	sendCmd(0xD3);//--set multiplex ratio(1 to 64)
	sendCmd(0x00);//
	sendCmd(0xD5);//0xa4,Output follows RAM content;0xa5,Output ignores RAM content
	sendCmd(0x80);//-set display offset
	sendCmd(0xD9);//-not offset
	sendCmd(0xF1);//--set display clock divide ratio/oscillator frequency
	sendCmd(0xDA);//--set divide ratio
	sendCmd(0x12);//--set pre-charge period
	sendCmd(0xDB);//
	sendCmd(0x40);//--set com pins hardware configuration
	sendCmd(0x8D);//--set vcomh
	sendCmd(0x14);//0x20,0.77xVcc
	sendCmd(0xAF);//--set DC-DC enable
	//sendCmd(0xAF);//--turn on oled panel 
        delay(50);
}
