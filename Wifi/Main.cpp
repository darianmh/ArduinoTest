
/*
https://ls1.ir/mh
https://ls1.ir/team
https://ls1.ir/github
*/

#include <Arduino.h>
#include <ESP8266WiFi.h>

// defines variables
#define WIFI_SSID "SSID"
#define WIFI_PASS "PASSWORD"


void setup()
{

  Serial.begin(9600); // Starts the serial communication

  // Begin WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  // Loop continuously while WiFi is not connected
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
  }

}

void loop()
{

}