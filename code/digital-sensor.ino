const int SENSOR_PIN = 4;

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  int sensorState = digitalRead(SENSOR_PIN);
  Serial.println(sensorState == HIGH ? "Sensor is HIGH" : "Sensor is LOW");
  delay(500);
}
