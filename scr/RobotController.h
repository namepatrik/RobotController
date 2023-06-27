#ifndef RobotController_h
#define RobotController_h

#include <Servo.h>

class RobotController {
  public:
    RobotController(); // Constructor
    void begin(int leftServoPin, int rightServoPin); // Initialize the library
    void moveForward(int steps); // Move the robot forward
    void moveBackward(int steps); // Move the robot backward
    void turnLeft(); // Turn the robot left
    void turnRight(); // Turn the robot right
    void turnBack();
    void stay();
  private:
    Servo leftServo; // Left servo object
    Servo rightServo; // Right servo object
    int leftPin; // Pin for the left servo
    int rightPin; // Pin for the right servo
};

#endif
