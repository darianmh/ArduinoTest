
/*
https://ls1.ir/mh
https://ls1.ir/team
https://ls1.ir/github
*/

int servo1 = 9;//D9

int angle;
int angleServo1;
int startDeg = 0;
int reverse = 1;
int angleChange = 1;
int pwm;
int target = 90;

void setup()
{
  pinMode(servo1, OUTPUT);
}

void loop()
{
  if (angle <= startDeg)
  {
    reverse = 0;
  }
  if (angle >= target)
  {
    reverse = 1;
  }
  if (reverse == 1)
  {
    angle = angle - angleChange;
  }
  else
  {
    angle = angle + angleChange;
  }
  angleServo1 = angle;
  servoPulse(servo1, angleServo1);


}

void servoPulse(int servo, int angle)
{
  pwm = (angle * 11) + 500; // Convert angle to microseconds
  digitalWrite(servo, HIGH);
  delayMicroseconds(pwm);
  digitalWrite(servo, LOW);
  delay(50); // Refresh cycle of servo
}