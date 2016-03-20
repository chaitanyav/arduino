void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial);
}

int data = 0;
void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) {
    data  = Serial.read();
    Serial.write(data);
  }
}
