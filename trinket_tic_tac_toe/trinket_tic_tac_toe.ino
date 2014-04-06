#include <TinyWireM.h>
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"

Adafruit_BicolorMatrix m = Adafruit_BicolorMatrix();
char turn = 'x';
char pos[] = {'n','n','n','n','n','n','n','n','n'};
static const uint8_t PROGMEM
  board[] = {
    B00100100,
    B00100100,
    B11111111,
    B00100100,
    B00100100,
    B11111111,
    B00100100,
    B00100100,
  };
void setup() {
 m.begin(0x70);
 pinMode(1,INPUT);
 digitalWrite(1, HIGH);
 pinMode(3,INPUT);
 digitalWrite(3, HIGH);
}
void loop() {
}
void draw(){
  int i = 0;
  for(i=0; i<9; i++){
    if(pos[i] != 'n'){
      if(pos[i] == 'x'){
        
      }else{
      }
    }
  }
}
