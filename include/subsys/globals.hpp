#include "main.h"

#ifndef GLOBALS_H
#define GLOBALS_H

//MOTORS
namespace m {
    extern pros::Motor flywheel;
}

//CONTROLLER
namespace ctrl {
    extern pros::Controller ctrl;
    extern pros::controller_analog_e_t flywheel_speed;
    extern pros::controller_digital_e_t flywheel_lock;
}





#endif