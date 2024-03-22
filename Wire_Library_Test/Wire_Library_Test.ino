#include    "Wire.h"

/*
*
*   Raspberry Pi              Portenta C33 / Raspberry Pi Aliases
*/

#define GPIO_02               29              //  Does NOT function as a GPIO
#define SDA1                  GPIO_02
#define SPI3_MOSI             GPIO_02

#define GPIO_03               40
#define SCL1                  GPIO_03
#define SPI3_SCLK             GPIO_03

void setup (void) {
    Wire.begin(SDA1, SCL1);
}

```arduino
E:\Arduino\SketchBook\Arduino_Portenta_C33\Robot_Smart_Home_Controller\Wire_Library_Test\Wire_Library_Test.ino: In function 'void setup()':
E:\Arduino\SketchBook\Arduino_Portenta_C33\Robot_Smart_Home_Controller\Wire_Library_Test\Wire_Library_Test.ino:17:26: error: no matching function for call to 'TwoWire::begin(int, int)'
     Wire.begin(SDA1, SCL1);
                          ^
In file included from E:\Arduino\SketchBook\Arduino_Portenta_C33\Robot_Smart_Home_Controller\Wire_Library_Test\Wire_Library_Test.ino:1:0:
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:100:10: note: candidate: virtual void TwoWire::begin()
     void begin();
          ^~~~~
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:100:10: note:   candidate expects 0 arguments, 2 provided
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:101:10: note: candidate: virtual void TwoWire::begin(uint8_t)
     void begin(uint8_t);
          ^~~~~
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:101:10: note:   candidate expects 1 argument, 2 provided
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:102:10: note: candidate: void TwoWire::begin(uint16_t)
     void begin(uint16_t);
          ^~~~~
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:102:10: note:   candidate expects 1 argument, 2 provided
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:103:10: note: candidate: void TwoWire::begin(int)
     void begin(int);
          ^~~~~
C:\Users\robot\AppData\Local\Arduino15\packages\arduino\hardware\renesas_portenta\1.1.0\libraries\Wire/Wire.h:103:10: note:   candidate expects 1 argument, 2 provided

exit status 1

Compilation error: no matching function for call to 'TwoWire::begin(int, int)'```