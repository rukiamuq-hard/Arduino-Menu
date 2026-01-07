#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_W 128
#define SCREEN_H 64

Adafruit_SSD1306 display(SCREEN_W, SCREEN_H, &Wire, -1);
inline void drawTextDispl(const char* text, uint8_t x, uint8_t y){
  display.setCursor(x, y);
  display.println(text);
}

int8_t perm = 0;

void setup() {
Serial.begin(9600);
pinMode(2, INPUT_PULLUP);
pinMode(3, INPUT_PULLUP);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
    while(true);
  }
}

void loop() {
  if(digitalRead(2) == LOW){
  perm = perm + 1;
  delay(150);
}
if(digitalRead(3) == LOW){
  perm = perm - 1;
  delay(150);
}

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
switch(perm){
  case -1: perm = 2; break;
  case 0: {
  display.setTextSize(1);
  drawTextDispl("MAIN WINDOW", 32, 12);
  drawTextDispl("Settings", 38, 22);
  drawTextDispl("About", 46, 32); 
  display.drawFastHLine(32, 20, 64, SSD1306_WHITE);
  }; break;
  case 1: {
  drawTextDispl("Main Window", 32, 12);
  display.setTextSize(1);
  drawTextDispl("SETTINGS", 38, 22);
  drawTextDispl("About", 46, 32); 
  display.drawFastHLine(35, 30, 53, SSD1306_WHITE);
  }; break;
  case 2: {
  drawTextDispl("Main Window", 32, 12);
  display.setTextSize(1);
  drawTextDispl("Settings", 38, 22);
  drawTextDispl("ABOUT", 46, 32); 
  display.drawFastHLine(45, 40, 30, SSD1306_WHITE);
  }; break;
  case 3: perm = 0; break;
}
display.display();
}

