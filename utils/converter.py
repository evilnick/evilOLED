#!/env/python
import sys
import numpy
from PIL import Image

im = Image.open(sys.argv[1])
im = im.convert("1") 
rows=im.size[1]/8
cols=im.size[0]
val=""
print "const int bmap[8]= {"
for p in range(rows):
     for xx in range(cols):
         for yy in range(8):
            pix=im.getpixel((xx,(p*8)+yy))
            if (pix == 0 ):
               val="1"+val
            else:
               val="0"+val
         val = "B"+val
         print val +",",
         val=""
         if (xx%8 == 7):
             print ""
print "}"
