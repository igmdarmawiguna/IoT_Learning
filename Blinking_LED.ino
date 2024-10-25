const int pinLed = 23;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
  digitalWrite(pinLed, HIGH);
  delay(500);
  digitalWrite(pinLed,LOW);
  delay(500);
}
