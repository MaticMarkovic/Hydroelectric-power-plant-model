
#include <FastLED.h>                //include FastLED.h library

#define LED_PIN  7                  //set digital pin connected to LED tape
#define NUM_LEDS 45                 //set number of LED-iods on LED tape
CRGB leds[NUM_LEDS];

int value;                             //value - variable to store value from analog pin A5

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2813, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {

  value = (analogRead(A5));            //read values from analog pin A5

  if ((value >= 0) && (value < 29))
  {
    FastLED.clear();                   //turn OFF all LEDs on LED tape
    leds[0] = CRGB(0, 0, 0);
    leds[1] = CRGB(0, 0, 0);
    FastLED.show();                    //show all turned ON LEDs
  }

  if ((value >= 29) && (value < 32))   //turn ON first (LED 0) and second (LED 1), if the value on A5 is between 29 and 32 
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);         //set first LED color to red: CRGB(255 red, 0 green, 0 blue)
    leds[1] = CRGB(255, 10, 0);        //set second LED color to red-orange: CRGB(255 red, 10 green, 0 blue)
    FastLED.show();
  }

  if ((value >= 32 ) && (value < 35 ))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    FastLED.show();
  }

  if ((value >= 35) && (value < 38))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    FastLED.show();
  }

  if ((value >= 38) && (value < 53 ))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    FastLED.show();
  }

  if ((value >= 53 ) && (value < 68))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    FastLED.show();
  }

  if ((value >= 68) && (value < 83 ))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    FastLED.show();
  }

  if ((value >= 83 ) && (value < 98))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    FastLED.show();
  }

  if ((value >= 98 ) && (value < 113))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    FastLED.show();
  }

  if ((value >= 113) && (value < 128))
  {
    FastLED.clear();
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    FastLED.show();
  }

  if ((value >= 128 ) && (value < 143))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(0, 0, 0);
    leds[12] = CRGB(0, 0, 0);
    leds[13] = CRGB(0, 0, 0);
    leds[14] = CRGB(0, 0, 0);
    leds[15] = CRGB(0, 0, 0);
    leds[16] = CRGB(0, 0, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 143) && (value < 158 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(0, 0, 0);
    leds[13] = CRGB(0, 0, 0);
    leds[14] = CRGB(0, 0, 0);
    leds[15] = CRGB(0, 0, 0);
    leds[16] = CRGB(0, 0, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 158) && (value < 173))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(0, 0, 0);
    leds[14] = CRGB(0, 0, 0);
    leds[15] = CRGB(0, 0, 0);
    leds[16] = CRGB(0, 0, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 173) && (value < 188 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(0, 0, 0);
    leds[15] = CRGB(0, 0, 0);
    leds[16] = CRGB(0, 0, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 188) && (value < 203))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(0, 0, 0);
    leds[16] = CRGB(0, 0, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 203) && (value < 218 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(0, 0, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 218 ) && (value < 233))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 233) && (value < 248))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 248) && (value < 263))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 263) && (value < 278))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(0, 0, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 278) && (value < 293 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 293) && (value < 308))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(0, 0, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 308) && (value < 323 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(0, 0, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 323) && (value < 338 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 338) && (value < 342))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 342 ) && (value < 346))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 346) && (value < 350 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(0, 0, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 350 ) && (value < 354 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(0, 0, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 354 ) && (value < 358 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 358 ) && (value < 362 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 362 ) && (value < 366 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(0, 0, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 366 ) && (value < 370))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 370 ) && (value < 374))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 374 ) && (value < 378))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 378) && (value < 382))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 382 ) && (value < 386))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 386 ) && (value < 390 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 390 ) && (value < 394))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 394) && (value < 398 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(0, 0, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 398) && (value < 402))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(0, 0, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 402) && (value < 406 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(30, 255, 0);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 406) && (value < 410 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(30, 255, 0);
    leds[41] = CRGB(20, 255, 0);
    leds[42] = CRGB(0, 0, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 410) && (value < 414))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(30, 255, 0);
    leds[41] = CRGB(20, 255, 0);
    leds[42] = CRGB(0, 255, 0);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 414 ) && (value < 418))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(30, 255, 0);
    leds[41] = CRGB(20, 255, 0);
    leds[42] = CRGB(0, 255, 0);
    leds[43] = CRGB(0, 255, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 418 ) && (value < 422 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(30, 255, 0);
    leds[41] = CRGB(20, 255, 0);
    leds[42] = CRGB(0, 255, 0);
    leds[43] = CRGB(0, 255, 0);
    leds[44] = CRGB(0, 255, 0);
    leds[45] = CRGB(0, 0, 0);
    FastLED.show();
  }

  if ((value >= 422) && (value < 3000 ))
  {
    leds[0] = CRGB(255, 0, 0);
    leds[1] = CRGB(255, 10, 0);
    leds[2] = CRGB(255, 20, 0);
    leds[3] = CRGB(255, 31, 0);
    leds[4] = CRGB(255, 42, 0);
    leds[5] = CRGB(255, 53, 0);
    leds[6] = CRGB(255, 64, 0);
    leds[7] = CRGB(255, 75, 0);
    leds[8] = CRGB(255, 86, 0);
    leds[9] = CRGB(255, 97, 0);
    leds[10] = CRGB(255, 108, 0);
    leds[11] = CRGB(255, 118, 0);
    leds[12] = CRGB(255, 128, 0);
    leds[13] = CRGB(255, 139, 0);
    leds[14] = CRGB(255, 150, 0);
    leds[15] = CRGB(255, 161, 0);
    leds[16] = CRGB(255, 172, 0);
    leds[17] = CRGB(255, 181, 0);
    leds[18] = CRGB(255, 191, 0);
    leds[19] = CRGB(255, 201, 0);
    leds[20] = CRGB(255, 211, 0);
    leds[21] = CRGB(255, 221, 0);
    leds[22] = CRGB(255, 232, 0);
    leds[23] = CRGB(255, 243, 0);
    leds[24] = CRGB(255, 255, 0);
    leds[25] = CRGB(240, 255, 0);
    leds[26] = CRGB(230, 255, 0);
    leds[27] = CRGB(220, 255, 0);
    leds[28] = CRGB(200, 255, 0);
    leds[29] = CRGB(190, 255, 0);
    leds[30] = CRGB(170, 255, 0);
    leds[31] = CRGB(160, 255, 0);
    leds[32] = CRGB(150, 255, 0);
    leds[33] = CRGB(140, 255, 0);
    leds[34] = CRGB(120, 255, 0);
    leds[35] = CRGB(110, 255, 0);
    leds[36] = CRGB(90, 255, 0);
    leds[37] = CRGB(80, 255, 0);
    leds[38] = CRGB(60, 255, 0);
    leds[39] = CRGB(50, 255, 0);
    leds[40] = CRGB(30, 255, 0);
    leds[41] = CRGB(20, 255, 0);
    leds[42] = CRGB(0, 255, 0);
    leds[43] = CRGB(0, 255, 0);
    leds[44] = CRGB(0, 255, 0);
    leds[45] = CRGB(0, 255, 0);
    FastLED.show();
  }
}
