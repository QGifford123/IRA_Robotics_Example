#include "vex.h"
#include "robot-config.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LeftFront = motor(PORT7, ratio6_1, true);
motor LeftMiddle = motor(PORT5, ratio6_1, true);
motor LeftBack = motor(PORT1, ratio6_1, true);
motor RightFront = motor(PORT3, ratio6_1, false);
motor RightMiddle = motor(PORT4, ratio6_1, false);
motor RightBack = motor(PORT6, ratio6_1, false);
motor Hook = motor(PORT2, ratio6_1, true);
motor WallStake = motor(PORT10, ratio18_1, true);
inertial Inertial = inertial(PORT7);
rotation EncoderS = rotation(PORT14, true);
rotation EncoderR = rotation(PORT15, false);
rotation EncoderStake = rotation(PORT9, false);
digital_out Clamp = digital_out(Brain.ThreeWirePort.G);
digital_out Doinker = digital_out(Brain.ThreeWirePort.A);
// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}