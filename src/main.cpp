// Trey 12/09/21

// From Arduino
#include <Arduino.h>
#include <WiFi.h>

// Header files
#include <wifiSetup.h>
#include <webServer.h>
// #include <ledMatrix.h>

// Setup
void setup() {

  // Serial communication to computer through USB
  // Serial.begin(9600);
  Serial.begin(115200);

  // WiFi
  // createWiFi();
  connectToWiFi();

  // Web Server
  startWebServer();

  // LED Matrix
  ledMatrixSetup();

}

// Loop
void loop() {
  
}
