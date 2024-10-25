void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(19, OUTPUT);
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacaSinyal = digitalRead(5);
  Serial.println(bacaSinyal);
  if(bacaSinyal==1)
    digitalWrite(19, HIGH);
  else if(bacaSinyal==0)
    digitalWrite(19,LOW);
  //delay(1000);
  //digitalWrite(19,LOW);
  //delay(1000);
  delay(10); // this speeds up the simulation
}
