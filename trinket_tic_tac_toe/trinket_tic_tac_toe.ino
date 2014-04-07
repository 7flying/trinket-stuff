#include <TinyWireM.h>
#include "Adafruit_GFX.h"
#include "Adafruit_LEDBackpack.h"

Adafruit_BicolorMatrix m = Adafruit_BicolorMatrix();
char turn = 'x';
int puntx, punty;
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
int coor[][2] PROGMEM = {
 {0, 0}, {4,0}, {6,0},
 {24,3}, {27,3}, {30,3},
 {48,6}, {51,6}, {54,6}
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

void movePointer(){

}
// Draw 'x' or 'o'
void draw(){
  int i = 0;
  for(i=0; i<9; i++){
    if(pos[i] != 'n'){
      if(pos[i] == 'x'){
        m.drawLine(coor[i][0],coor[i][1],1,1, LED_GREEN);
      }else{
		m.drawRect(coor[i][0],coor[i][1],1,1, LED_RED);
      }
    }
  }
}
