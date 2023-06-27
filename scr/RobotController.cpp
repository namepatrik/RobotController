#include "RobotController.h"

RobotController::RobotController() {}



void RobotController::begin(int leftServoPin, int rightServoPin) {
  leftPin = leftServoPin;
  rightPin = rightServoPin;
  leftServo.attach(leftPin);
  rightServo.attach(rightPin);
}

void RobotController::moveBackward(int steps) {
  // Code to move the robot forward
  // You need to adjust the servo angles as per your robot configuration
  int wToS = steps * 1000;
  leftServo.write(90-45);
  rightServo.write(90+45);
  delay(wToS);
  leftServo.write(90);
  rightServo.write(90);
  delay(1500);
}


void RobotController::moveForward(int steps) {
  // Code to move the robot backward
  // You need to adjust the servo angles as per your robot configuration
  int wToS = steps * 1000;
  leftServo.write(90+45);
  rightServo.write(90-45);
  delay(wToS);
  leftServo.write(90);
  rightServo.write(90);
  delay(1500);

}

void RobotController::turnLeft() {
  // Code to turn the robot left
  // You need to adjust the servo angles as per your robot configuration
  leftServo.write(45);
  rightServo.write(-45);
  delay(400);
  leftServo.write(90);
  rightServo.write(90);
  delay(1500);
}

void RobotController::turnRight() {
  // Code to turn the robot right
  // You need to adjust the servo angles as per your robot configuration
  leftServo.write(-45);
  rightServo.write(45);
  delay(400);
  leftServo.write(90);
  rightServo.write(90);
  delay(1500);
}

void RobotController::turnBack() {
  // Code to turn the robot right
  // You need to adjust the servo angles as per your robot configuration
  leftServo.write(-45);
  rightServo.write(45);
  delay(800);
  leftServo.write(90);
  rightServo.write(90);
  delay(1500);
}

void RobotController::stay() {
  // Code to turn the robot right
  // You need to adjust the servo angles as per your robot configuration
  leftServo.write(90);
  rightServo.write(90);
}