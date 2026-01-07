# Arduino menu with SSD1306
**This so small menu absolutly worked on SSD1306**

![SSD1306 screen with menu](SCREEN.jpg "Photo of the screen")
## Included/Headers

**For this arduino menu need:**
* Adafruit_GFX.h
* Adafruit_SSD1306.h
* Wires.h (Standart library for arduino IDE)

**You will be download all of Adafruit library in, a library manager, or also at the github:** [HERE IS GITHUB](https://github.com/adafruit/Adafruit_SSD1306)

## Materials

* **8 Wires**
* **Breadboard** (but you can without it)
* **2 Buttons**
* **SSD1306 screen**

## How to connect

**2 Buttons connect to GND, 1 of it button connect to digitalPort 2, it will be up, button 2 connect to digitalPort 3, it will be down.**
**SSD1306, GND connect to GND, VCC connect to 5 V, SCL connect to analogPort 5, SDA to analogPort, be carefull DO NOT confuse SCL with SDA, otherwise the screen will not turn on.**
**And finally we make it, load code to arduino from src, and enjoy.**

## Photo with all project

![Arduino and breadboard working](ALLARDUINO.jpg)
