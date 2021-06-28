// C++ code
//
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int servoPos = 0;

void setup()
{
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
  servo5.attach(13);

}

void loop()
{
  for(servoPos = 0; servoPos <= 90; servoPos++)
      {
        servo1.write(servoPos);
        servo2.write(servoPos);
        servo3.write(servoPos);
        servo4.write(servoPos);
        servo5.write(servoPos);
        delay(100);

      }
  for(servoPos > 90; servoPos > 0; servoPos--)
      {
        servo1.write(servoPos);
        servo2.write(servoPos);
        servo3.write(servoPos);
        servo4.write(servoPos);
        servo5.write(servoPos);
        delay(100);

      }
}
