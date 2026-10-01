const unsigned long stopTime = 310000UL;

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned long time = millis();

  if (time <= stopTime) {
    int reading = analogRead(A0);

    Serial.print(time);
    Serial.print(',');
    Serial.println(reading);
  }

  delay(1000);
}
