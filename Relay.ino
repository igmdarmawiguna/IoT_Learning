#define pinRelay 15

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRelay,OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

//NC dikoneksikan ketika ada kondisi dimana setelah tercapai sesuatu mati
//misalnya memanaskan air, membuat nasi etc..

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("=============================");
  Serial.println("EDSPERT - Pelatihan 4 - Relay");
  Serial.println("=============================");
  Serial.println("Relay OFF");
  digitalWrite(pinRelay, LOW);
  delay(2000);
  Serial.println("Relay ON");
  digitalWrite(pinRelay,HIGH);
  delay(2000); // this speeds up the simulation
}
