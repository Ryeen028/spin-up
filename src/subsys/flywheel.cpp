#include "main.h"

namespace flywheel {

void update_speed()
{
    speed = ctrl::ctrl.get_analog(ctrl::flywheel_speed);
}

void set_speed()
{
    m::flywheel = speed;
}

void update_lock()
{
    if (ctrl::ctrl.get_digital_new_press(ctrl::flywheel_lock))
        lock = !lock;
}

void main() 
{
    update_lock();
    if (!lock)
        update_speed();
    set_speed();
}


} // namespace flywheel