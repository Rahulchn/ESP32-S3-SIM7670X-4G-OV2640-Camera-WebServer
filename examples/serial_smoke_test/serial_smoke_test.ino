void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("ESP32-S3 serial test successful");
}

void loop() {
  Serial.println("Board is running");
  delay(1000);
}
