

#define DELAY 100
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  setColor(0, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i, j, k;
  for (i = 254; i >= 0; i--) {
    setColor(i, 255, 255);
    delay(DELAY);
  }

  for (j = 254; j >= 0; j--) {
    setColor(255, j, 255);
    delay(DELAY);
  }

  for (k = 254; k >= 0; k--) {
    setColor(255, 255, k);
    delay(DELAY);
  }
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
