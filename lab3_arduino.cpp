const int thermPin = A0;
const int potPin = A1;
const int ledPin = 9;
const int heaterPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(heaterPin, OUTPUT);

  analogWrite(ledPin, 0);
  analogWrite(heaterPin, 0);

  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  int thermValue = analogRead(thermPin);
  int outputLevel = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, outputLevel);
  analogWrite(heaterPin, outputLevel);

  Serial.print(millis() / 1000.0, 3);
  Serial.print(",");
  Serial.print(potValue);
  Serial.print(",");
  Serial.println(thermValue);

  delay(200);
}
