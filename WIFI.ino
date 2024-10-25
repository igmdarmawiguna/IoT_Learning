#include <WiFi.h>
char* ssid ="Wokwi-GUEST";
char* pass = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,pass);
  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(100);
  }
  Serial.println("ESP Sudah connect");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
