const int sensorPin = 4;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  
  Serial.print("Giá trị: ");
  Serial.println(sensorValue);

  delay(1000);
}