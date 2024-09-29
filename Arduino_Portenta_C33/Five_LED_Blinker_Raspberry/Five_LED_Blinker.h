/*
  Maximum voltage to be read from analog pins in volts
*/
#define MAXIMUM_ANALOG_VOLTAGE    5.0
#define ANALOG_RESOLUTION         4096.0

#define DEFAULT_BLINK_RATE_MS     150
#define DEFAULT_LOOP_DELAY_MS     100
#define DEFAULT_NR_CYCLES           1

#define PIEZO_BUZZER_PIN          D6          //  PWM

#define LED_RASPI_HALT_PIN        GPIO_21     //  Red - Unable to connect to WiFi
#define LED_RASPI_CONNECT_PIN     GPIO_20     //  Green - Connected to WiFi
#define LED_RASPI_WIFI_PIN        GPIO_19     //  Yellow - Lost WiFi connection

#define ANALOG_POT_PIN            A0
#define ANALOG_POT_NUMBER          0

/*
  Circuit Digital Pins: LEDs
*/
#define LED_WHITE_PIN             D0          //  Works
#define LED_BLUE_PIN              D1          //  Works
#define LED_RED_PIN               D2          //  Works
#define LED_YELLOW_PIN            D3          //  Works
#define LED_GREEN_PIN             D4          //  Works

/*
  Circuit Analog Pins: Resistors
*/
#define ANALOG_220_PIN            A0          //  Works   Raspberry Pi 07
#define ANALOG_330_PIN            A1          //  Works   Raspberry Pi 29
#define ANALOG_1K_PIN             A2          //  Works   Raspberry Pi 31
#define ANALOG_2K_PIN             A3          //  Works   Raspberry Pi 32
#define ANALOG_5K_PIN             A4          //  Works   Raspberry Pi 22
#define ANALOG_10K_PIN            A5          //  Works
#define ANALOG_100K_PIN           A6          //  Works
#define ANALOG_1M_PIN             A7          //  Works

/*
  Switches
*/
#define SWITCH_WHITE_PIN          D5          //  A0 Works Raspberry Pi 07 (White)
#define SWITCH_BLUE_PIN           D6          //  A1 Works Raspberry Pi 29 (Blue)
#define SWITCH_RED_PIN            D7          //  A2 Works Raspberry Pi 31 (Red)
#define SWITCH_YELLOW_PIN         A3          //  Works   Raspberry Pi 32 (Yellow)
#define SWITCH_GREEN_PIN          A4          //  Works   Raspberry Pi 22 (Green)

uint8_t LED_PINS[5] = { LED_WHITE_PIN, LED_BLUE_PIN, LED_RED_PIN, LED_YELLOW_PIN, LED_GREEN_PIN };
#define NUMBER_OF_LEDS (sizeof(LED_PINS) / sizeof(uint8_t))
String LED_NAMES[NUMBER_OF_LEDS] = { "White", "Blue", "Red", "Yellow", "Green" };

uint8_t SWITCH_PINS[5] = { SWITCH_WHITE_PIN, SWITCH_BLUE_PIN, SWITCH_RED_PIN, SWITCH_YELLOW_PIN, SWITCH_GREEN_PIN };
#define NUMBER_OF_SWITCHES (sizeof(SWITCH_PINS) / sizeof(uint8_t))
String SWITCH_NAMES[NUMBER_OF_SWITCHES] = { "White", "Blue", "Red", "Yellow", "Green" };
bool SWITCH_READINGS[NUMBER_OF_SWITCHES] = { false, false, false, false, false };

uint8_t RESISTOR_PINS[8] = { ANALOG_POT_PIN, ANALOG_330_PIN, ANALOG_1K_PIN, ANALOG_2K_PIN, 
  ANALOG_5K_PIN, ANALOG_10K_PIN, ANALOG_100K_PIN, ANALOG_1M_PIN };

#define NUMBER_OF_RESISTORS ((sizeof(RESISTOR_PINS) / sizeof(uint8_t)))
int RESISTOR_READINGS[NUMBER_OF_RESISTORS];
String RESISTOR_NAMES[NUMBER_OF_RESISTORS] = { "220", "330", "1K", "2K", "5K", "10K", "100K", "1Meg" };
float RESISTOR_VOLTAGES[NUMBER_OF_RESISTORS];
