#include "main.h"

//MOTORS
namespace m{
    pros::Motor flywheel1 (11, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_DEGREES);
    pros::Motor flywheel2 (10, pros::E_MOTOR_GEARSET_06, true, pros::E_MOTOR_ENCODER_DEGREES);
    pros::Motor feed (9, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);

}

//CONTROLLER
namespace ctrl 
{
    pros::Controller ctrl (pros::E_CONTROLLER_MASTER);
    pros::controller_digital_e_t flywheel_toggle = pros::E_CONTROLLER_DIGITAL_A;
    pros::controller_digital_e_t feed = pros::E_CONTROLLER_DIGITAL_B;
}
