#include <Arduino.h>


/*
https://ls1.ir/mh
https://ls1.ir/team
https://ls1.ir/github
*/

// defines pins numbers
const int trigPin = 12; //D6
const int echoPin = 14; //D5

// defines variables
long duration;
long distance;


void setup()
{

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input

  Serial.begin(9600); // Starts the serial communication
}

void loop()
{

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input
  digitalWrite(echoPin, 0.4);


  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(4000);
}