#include <TinyWireM.h>
#include <Adafruit_LEDBackpack.h>
#include <Adafruit_GFX.h>
  
Adafruit_BicolorMatrix m = Adafruit_BicolorMatrix();
int x = 0, y = 0;
void setup() {
  m.begin(0x70);
  pinMode(3, INPUT);
  digitalWrite(3, HIGH);
}
void explosion() {
  m.fillRect(x,y,2,2,LED_YELLOW);
  m.writeDisplay();
}
void loop() {
  m.clear();
  m.drawPixel(x, y, LED_YELLOW);
  m.writeDisplay();
  if(!digitalRead(3))
    explosion();
  delay(150);
  x++;
  if(x>7) {
    x= 0;
    y++;
  }
  if(y>7)
    y=0;
}

