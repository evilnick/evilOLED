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
  void dataStart();
  void dataStop();
  void sendByte(unsigned char data);
  void sendCmd(unsigned char cmd);
  void init();
  void cls(char);
  void setCursor(char x, char y);
  void putChar(char);
  void putString(char*);
  void putString(int s);
  void splash();
  void flash(int d);
  void alert(int d=200);
 private:
  char _sda;
  char _scl;
  char _row;
  char _col;
  
};

#endif
