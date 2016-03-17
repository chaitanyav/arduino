/*
Adafruit Arduino - Lesson 3. RGB LED
https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/arduino-sketch
*/

// long pin --- > 3.2V
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

//uncomment this line if using a Common Anode LED
#define COMMON_ANODE
#define DELAY 1000
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  setColor(255, 0, 0);
  delay(DELAY);
  setColor(0, 255, 0);
  delay(DELAY);
  setColor(0, 0, 255);
  delay(DELAY);
  setColor(255, 130, 171); //palevioletred
  delay(DELAY);
  setColor(255, 0, 255); //magenta
  delay(DELAY);
  setColor(30, 144, 255); //dodger blue
  delay(DELAY);
  setColor(0, 245, 255); // turquoise
  delay(DELAY);
  setColor(124, 252, 0); // lawngreen
  delay(DELAY);
  setColor(255, 255, 0); // yellow
  delay(DELAY);
  setColor(155, 48, 255); // purple
  delay(DELAY);
  setColor(255, 165, 0); // orange
  delay(DELAY);
  setColor(30, 30, 30); // sgi dark gray
  delay(DELAY);
  setColor(107, 142, 35); //olive drab
  delay(DELAY);
  setColor(205, 79, 77);
  delay(DELAY);
  setColor(255, 131, 250); // orchid
  delay(DELAY);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
