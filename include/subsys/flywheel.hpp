#include "main.h"

#ifndef FLYWHEEL_H
#define FLYWHEEL_H

namespace flywheel {
    void update_speed();
    void set_speed(int speed);
    void update_lock();
    void main();
    inline bool lock;
    inline int speed;
}


#endif