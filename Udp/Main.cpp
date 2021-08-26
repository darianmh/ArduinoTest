
/*
https://ls1.ir/mh
https://ls1.ir/team
https://ls1.ir/github
*/

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>


// defines variables
#define WIFI_SSID "SSID"
#define WIFI_PASS "PASSWORD"
#define UDP_PORT 4210

// UDP
WiFiUDP UDP;
char packet[255];
char reply[] = "Packet received!";
char SOCKET_IP[] = "IP";
int SOCKET_PORT = 32123;

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

  // Begin listening to UDP port
  UDP.begin(UDP_PORT);
}

void loop()
{

  // Send return packet
  // UDP.beginPacket(UDP.remoteIP(), UDP.remotePort());
  UDP.beginPacket(SOCKET_IP, SOCKET_PORT);
  UDP.write(durationText);
  UDP.endPacket();

  delay(4000);
}