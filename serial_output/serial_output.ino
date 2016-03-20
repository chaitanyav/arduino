void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.print("ASCII Table:\n");
}

int start = 33;
void loop() {
  Serial.print("ascii: ");
  Serial.write(start);
  Serial.print(" dec: ");
  Serial.print(start);
  Serial.print(" hex: ");
  Serial.print(start, HEX);
  Serial.print(" oct: ");
  Serial.print(start, OCT);
  Serial.print(" bin: ");
  Serial.print(start, BIN);

  if (start == 126) {
    start = 33;
  } else {
    start++;
  }
  Serial.print("\n");
  delay(1000);
}
