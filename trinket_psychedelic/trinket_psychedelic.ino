#include <TinyWireM.h>
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"

Adafruit_BicolorMatrix m = Adafruit_BicolorMatrix();

void setup() {
 m.begin(0x70);
}

void waveCrash() {
  m.clear();
  for(uint8_t i = 0 ; i < 7; i++){
    m.drawLine(0,i,i,0, LED_RED);
    m.drawLine(7-i,7,7,7-i,LED_GREEN);
    m.writeDisplay();
    delay(250);
  }
  m.drawLine(0,7,7,0,LED_YELLOW);
  m.writeDisplay();
  delay(250); 
}

void rotateLine() {
  for(int i = 7; i >=0 ; i--) {
    m.clear();
    m.drawLine(0,i,7,7-i,LED_YELLOW);
    m.writeDisplay();
    delay(250);
  }
  m.drawLine(0,1,1,0, LED_YELLOW);
  m.drawLine(6,7,7,6, LED_YELLOW);
  m.writeDisplay();
  delay(250); 
}

void loop() {
  waveCrash();
  rotateLine();
}
