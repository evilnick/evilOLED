evilOLED
========

Arduino OLED character-based display lib for I2C two-wire SSD1306-based OLED displays 128x64

This library was created for several reasons:

 - These specific OLED displays are cheap! Check eBay (about $3 each).
 - The Adafruit libraries for similar displays don't work with I2C
 - Other libraries implement a framebuffer, which instantly uses about half of your dynamic 
   memory on standard Arduinos
 - Sometimes you just want a nice, cheap, low overhead text display
 - Ultimately, I wrote this because I was seduced by cheap displays on the internet and only
 discovered after I bought several that there was no library to make them work
 
##Things this library will do
 
 Using a font file stored in Arduino PROGMEM, this library can intialise the display and do the 
 following:
 
  - Display (limited) text on the screen at an x,y (0-16,0-7) position
  - Display integers on the screen at an x,y (0-16,0-7) position
  - As you control the font, you can program any characters you like!
  - Utility python script for generating font and/or splash screen data included
  - Flash screen (with a specified delay)
  - Alert mode (flashes multiple times with decreasing delay)
  - Integrated software 2-pin I2C comms, leaving Arduino SDA/SCL for other uses
  
##Things this library may eventually do (roadmap)
  
  - support double height font printing
  - support inverted text 
  - support scrolling modes
  - directly support float/double for putString()
  - use optional framebuffer (only uses memory if you enable it)
  - various graphic functions that will become possible with the above
  
##Support
  If you have a problem, you can file an issue and if I care, I may attend to it.
  Alternatively, if you want to fix things yourself, I am open to pull-requests.
  Everything lives here: https://github.com/evilnick/evilOLED/
