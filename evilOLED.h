/*
evilOLED is an Arduino library for efficient use of SSD1306 based 
displays, specifically 128x64 pixel ones using the I2C 2-wire
interface. This driver does not use a framebuffer, therefore
leaving you with plenty of dynamic memory for your own code!
Written by Nick Veitch, 2014 <veryevilnick@gmail.com>
Released under MIT license
Latest versions available at https://github.com/evilnick/evilOLED/
*/
#ifndef _EVILOLED_
#define _EVILOLED_

using namespace std;
#include "Arduino.h"
#include <avr/pgmspace.h>
#define BLACK 0
#define WHITE 1
#define _slave_address 0x78
#define OLED_WIDTH 128
#define OLED_HEIGHT 64
#define OLED_FBSIZE 1024 
#define PAGE0 0xB0
#define PAGE1 0xB1
#define PAGE2 0xB2
#define PAGE3 0xB3
#define PAGE4 0xB4
#define PAGE5 0xB5
#define PAGE6 0xB6
#define PAGE7 0xB7



class evilOLED {
 public:
  evilOLED(char sda, char scl);
  void dataStart();                  //initiate data transfer mode (low level)
  void dataStop();                   //finish data transfer mode (low level)
  void sendByte(unsigned char data); //send a single byte to device (low level)
  void sendCmd(unsigned char cmd);   //send a single command (see datasheet)
  void init();                       //initialise display
  void cls(char);                    //clear the display (optionally with specific byte value)
  void setCursor(char x, char y);    //set the text cursor position (0-15,0-7)
  void putChar(char);                //write a single character to the display
  void putString(char*);             //write a string to the display
  void putString(int s);             //write a number to the display
  void splash();                     //display the splash screen
  void flash(int d);                 //flash the display (with specified delay)
  void alert(int d=200);             //rapid flash the screen to alert user (with optional delay)
 private:
  char _sda;
  char _scl;
  char _row;
  char _col;
  
};

#endif
