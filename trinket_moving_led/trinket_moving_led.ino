#include <TinyWireM.h>
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"
Adafruit_BicolorMatrix matrix = Adafruit_BicolorMatrix();
// Conectar x pin1, y pin3. C pin2, D pin0 -> I2C tiene clock en 2 y data en 0
int x = 0, y = 0;

void setup() {
 matrix.begin(0x70);
 pinMode(1, INPUT);
 digitalWrite(1, HIGH);
 pinMode(3, INPUT);
 digitalWrite(3, HIGH);
}
void loop() {
 matrix.clear();
 matrix.drawPixel(x, y, LED_RED);
 matrix.writeDisplay();
 delay(400);
 
 if(! digitalRead(1)){
   if( x < 8){
     x++;
    }else{
     x = 0;
    }
 }
 
 if(! digitalRead(3)){
   if( y < 8){
     y++;
    }else{
     y = 0;
    }   
 }
 
}
