#include "main.h"

#ifndef GLOBALS_H
#define GLOBALS_H

//MOTORS
namespace m {
    extern pros::Motor flywheel1;
    extern pros::Motor flywheel2;
    extern pros::Motor feed;
}

//CONTROLLER
namespace ctrl {
    void set_speed();
    void update_running();
    extern pros::Controller ctrl;
    extern pros::controller_digital_e_t flywheel_toggle;
    extern pros::controller_digital_e_t feed;
}





#endif