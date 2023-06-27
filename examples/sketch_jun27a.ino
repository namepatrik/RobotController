#include "RobotController.h"


RobotController robot;

#define leftServoPin D8 //
#define rightServoPin D4 //


void setup() {
  robot.begin(leftServoPin , rightServoPin);
  // Replace `leftServoPin` and `rightServoPin` with the actual pin numbers you're using
}

void loop() {
  robot.moveForward(2); //no of steps
  robot.turnBack();
  robot.moveForward(4);


}

//delay(1200);
  //robot.stay();
  //delay(2000);
  //robot.moveForward();
  //delay(1200);
  //robot.stay();
  //delay(2000);
  //robot.turnLeft();
  //delay(400);
  //robot.stay();
  //delay(2000);
  //robot.moveForward();
  //delay(1200);
  //robot.stay();
  //delay(2000);
  //robot.turnRight();
  //delay(400);
  //robot.stay();
  //delay(2000);
