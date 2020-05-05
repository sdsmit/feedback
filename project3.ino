int val[3];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  Serial.write(255);
  for (int i = 0; i < 3; i++) {
    val[i] = analogRead(i);
    Serial.write(val[i]>>3);    // send 7 MSB as serial data
    Serial.write(val[i]&7);
  }
  delay(5);
}
