
/*
  Arduino HAT Carrier to Arduino IDE Pin Translations
*/

/*
  Arduino MKR Pins
*/
#define D0              0                           //  PA_8
#define D1              BSP_IO_PORT_01_PIN_06       //  P106
#define D3              BSP_IO_PORT_01_PIN_11       //  P111
#define D4              BSP_IO_PORT_03_PIN_03       //  P303
#define D5              BSP_IO_PORT_04_PIN_01       //  P401
#define D6              BSP_IO_PORT_02_PIN_10       //  P210

#define D7              BSP_IO_PORT_06_PIN_01       //  P601
#define CS0             D7

#define D8              BSP_IO_PORT_04_PIN_02       //  P402
#define MOSI0           D8

#define D9              BSP_IO_PORT_09_PIN_00       //  P900
#define SCK0            D9

#define D10             BSP_IO_PORT_03_PIN_15       //  P204
#define MOSI0           D10

#define D11             BSP_IO_PORT_04_PIN_07       //  P407 *** NOTE: This is I2C SDA on the ESLOV connector
#define SDA0            D11

#define D12             BSP_IO_PORT_04_PIN_08       //  P408 *** NOTE: This is I2C SCL on the ESLOV connector
#define SCK0            D12

#define D13             BSP_IO_PORT_01_PIN_10       //  P110
#define RX0             RX0

#define D14             BSP_IO_PORT_06_PIN_02       //  P602
#define D14             TX0

/*
  Analog pins
*/
#define A0              BSP_IO_PORT_00_PIN_06       //  P006
#define D15             A0

#define A1              BSP_IO_PORT_00_PIN_05       //  P005
#define D16             A1

#define A2              BSP_IO_PORT_00_PIN_04       //  P004

#define A3              BSP_IO_PORT_00_PIN_02       //  P002

#define A4              BSP_IO_PORT_00_PIN_01       //  P001

#define A5              BSP_IO_PORT_00_PIN_15       //  P015
#define D20             A5
#define DAC1            A5

#define A6              BSP_IO_PORT_00_PIN_14       //  P014
#define D21             A6
#define DAC0            A6

#define A7              BSP_IO_PORT_00_PIN_00       //  P000
#define D22             A7


/*
  SDCARD                Arduino Portenta HAT Carrier Pins
*/
#define D84             BSP_IO_PORT_04_PIN_13       //  P413
#define SDHI_CLK        D84

#define D85             BSP_IO_PORT_04_PIN_12       //  P412
#define SDHI_CMD        D85

#define D86             BSP_IO_PORT_04_PIN_11       //  P411
#define SDHI_D0         D86

#define D87             BSP_IO_PORT_04_PIN_10       //  P410
#define SDHI_D1         D87

#define D88             BSP_IO_PORT_02_PIN_06       //  P206
#define SDHI_D2         D88

#define D89             BSP_IO_PORT_02_PIN_05       //  P205
#define SDHI D3         D89

#define D90             BSP_IO_PORT_04_PIN_15       //  P415
#define SDHI_WP         D91

/*
  RGB LED 
*/
#define D94             BSP_IO_PORT_01_PIN_07       //  P107
#define LEDR            D94

#define D35             BSP_IO_PORT_04_PIN_00       //  P400
#define LEDG            D35

#define D36             BSP_IO_PORT_08_PIN_00       //  P800 
#define LEDB            D36

/*
  I2C pins
*/
#define D37             BSP_IO_PORT_05_PIN_11       //  P511
#define SDA1            D37

#define D38             BSP_IO_PORT_05_PIN_12       //  P512
#define SCL1            D38

#define D39             39       //  PH_12
#define SDA2            D39                         

#define D40             40       //  PH_11
#define SCL2            D40                         //  RPi 5 | J2-47

/*
  CAN pins
*/
#define D41             BSP_IO_PORT_02_PIN_02       //  P202
#define CAN_RX          D41

#define D42             BSP_IO_PORT_02_PIN_03       //  P203
#define CAN_TX          D42

#define D43             BSP_IO_PORT_06_PIN_10       //  P610
#define CAN1_RX         D43

#define D44             BSP_IO_PORT_06_PIN_09       //  P609
#define CAN1_TX         D44

/*
    SPI pins
*/
#define D45             BSP_IO_PORT_01_PIN_00       //  P100
#define MISO1           D45

#define D46             BSP_IO_PORT_01_PIN_01       //  P101
#define MOSI1           D46

#define D47             BSP_IO_PORT_01_PIN_02       //  P102
#define SCLK1           D47

#define D48             BSP_IO_PORT_01_PIN_03       //  P103
#define CS1             D48

/*
  Other PWMs
*/
#define D23             BSP_IO_PORT_06_PIN_05       //  P605
#define D24             BSP_IO_PORT_06_PIN_08       //  P608
#define D25             BSP_IO_PORT_03_PIN_11       //  P311

#define D26             BSP_IO_PORT_06_PIN_00       //  P600
#define ETH_CLOCK       D26

/*
  GPIO (IRQ capable)
*/
#define D27               BSP_IO_PORT_00_PIN_09     //  P009
#define D28               BSP_IO_PORT_04_PIN_09     //  P409
#define D29               29                        //  PD_4
#define D30               BSP_IO_PORT_07_PIN_06     //  P706
#define D31               BSP_IO_PORT_07_PIN_07     //  P707
#define D32               BSP_IO_PORT_07_PIN_08     //  P708
#define D33               BSP_IO_PORT_08_PIN_0      //  P802

/*
  SSI (Audio)
*/
#define D63               BSP_IO_PORT_01_PIN_12     //  P112
#define SSI_CK            D63

#define D64               BSP_IO_PORT_01_PIN_13     //  P113   
#define SSI_WS            D64

#define D65               BSP_IO_PORT_01_PIN_14     //  P114
#define SSI_SDI           D65

#define D66               BSP_IO_PORT_01_PIN_15     //  P115
#define SSI_SDO           D66

/*
  UART pins
*/
#define D49               BSP_IO_PORT_06_PIN_13     //  P613
#define TX2               D49

#define D50               BSP_IO_PORT_06_PIN_14     //  P614  
#define RX2               D50

#define D51               BSP_IO_PORT_06_PIN_11     //  P611
#define RTS2              D51

#define D52               BSP_IO_PORT_04_PIN_04     //  P404
#define CTS2              D52


#define D53               8                         //  PL_3
#define TX3               D53

#define D54               10                        //  PJ_9
#define RX3               D54

#define D55               BSP_IO_PORT_05_PIN_03     //  P503
#define RTS3              D55

#define D56               BSP_IO_PORT_05_PIN_02     //  P502
#define CTS3              D56


#define D57               BSP_IO_PORT_08_PIN_05     //  P805
#define TX4               D57

#define D58               BSP_IO_PORT_05_PIN_13     //  P513
#define RX4               D58

#define D59               BSP_IO_PORT_05_PIN_08     //  P508
#define RTS4              D59

#define D60               BSP_IO_PORT_05_PIN_05     //  P500
#define CTS4              D60


#define D61               BSP_IO_PORT_06_PIN_03     //  P603
#define RTS0              D61

#define D62               BSP_IO_PORT_06_PIN_04     //  P604
#define CTS0              D62

 /*
  Generic GPIO pins
*/
#define D67               BSP_IO_PORT_09_PIN_08     //  P908
#define D68               BSP_IO_PORT_04_PIN_03     //  P403
#define D69               BSP_IO_PORT_09_PIN_01     //  P901
#define D70               BSP_IO_PORT_06_PIN_12     //  P612
#define D71               BSP_IO_PORT_03_PIN_12     //  P312
#define D72               BSP_IO_PORT_03_PIN_13     //  P313
#define D73               BSP_IO_PORT_03_PIN_14     //  P314
#define D74               BSP_IO_PORT_10_PIN_01     //  PA01
#define D75               BSP_IO_PORT_10_PIN_08     //  PA08
#define D76               BSP_IO_PORT_10_PIN_09     //  PA09
#define D77               BSP_IO_PORT_10_PIN_10     //  PA10
#define D78               BSP_IO_PORT_05_PIN_07     //  P507
#define D79               BSP_IO_PORT_11_PIN_00     //  PB00
#define D80               BSP_IO_PORT_06_PIN_15     //  P615
#define D81               BSP_IO_PORT_00_PIN_03     //  P003
#define D82               BSP_IO_PORT_00_PIN_07     //  P007
#define D83               BSP_IO_PORT_00_PIN_08     //  P008

/*
  Arduino HAT Carrier Raspberry Pi Connector Pins
*/
#define RP03              D39
#define RP03_GPIO23       RP03                       //  RP03_GPIO23 | RP03_SDA1   J2-45
#define RP_I2C2_SDA       RP03

#define RP05              D40                       //  RP05_GPIO3 RP05_SCL1 J2-47
#define RP_GPIO3          RP05                       //  RP05_GPIO3 RP05_SCL1 J2-47
#define RP_I2C2_SCL       RP05

#define RP07              D0                        // RP07_PWM0 | RP07_GEN0 J2-59                                 
#define RP_PWM0           RP07                       // RP07_PWM0 | RP07_GEN0 J2-59                                 

#define RP08              D53                       //  RP08_GPIO14 | RP06_TXD3
#define RP_GPIO14         RP08                       //  RP08_GPIO14 | RP06_TXD3

#define RP10              D54                       //  RP10_GPIO15 | RP10_RXD0
#define RP_GPIO15         RP10                       //  RP10_GPIO15 | RP10_RXD0

#define RP11              D29                       // RP11_GPIO17 | RP11_GEN0
#define RP_GPIO17         RP11                       // RP11_GPIO17 | RP11_GEN0
/*
#define RP13_
#define RP13_

#define RP14_
#define RP14_

#define RP15_
#define RP15_

#define RP16_
#define RP16_

#define RP17_
#define RP17_

#define RP18_
#define RP18_

#define RP19_
#define RP19_

#define RP20
#define RP22

#define RP23
#define RP24
#define RP25
#define RP26
#define RP27
#define RP28
#define RP29
#define RP30
#define RP31
#define RP32
#define RP33
#define RP34
#define RP35
#define RP36
#define RP37
#define RP38
#define RP39
#define RP40
*/