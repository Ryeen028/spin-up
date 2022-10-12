#include "main.h"
#include "pros/misc.h"

//MOTORS
namespace m{
pros::Motor flywheel (11, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_DEGREES);

}
//CONTROLLER
namespace ctrl 
{
    pros::Controller ctrl (pros::E_CONTROLLER_MASTER);
    pros::controller_analog_e_t flywheel_speed = pros::E_CONTROLLER_ANALOG_RIGHT_Y;
    pros::controller_digital_e_t flywheel_lock = pros::E_CONTROLLER_DIGITAL_A;
}
