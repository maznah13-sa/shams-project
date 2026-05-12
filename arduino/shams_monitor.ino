int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(sensorPin);

  float voltage = value * (5.0 / 1023.0);
  float current = voltage / 10.0;
  float power = voltage * current;

  Serial.print("POWER:");
  Serial.print(power, 2);

  Serial.print(",CURRENT:");
  Serial.print(current, 3);

  Serial.print(",VOLTAGE:");
  Serial.println(voltage, 2);

  delay(1000);
}