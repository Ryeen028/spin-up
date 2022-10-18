#include "flywheel.hpp"

namespace flywheel {

    /*

    Right analog stick controls speed
    Press a to lock the speed, press a again to unlock the speed
    while locked, speed will stay at the value that the analog stick was at when a was pressed

    */



    void set_speed()
    {
        m::flywheel1 = 127 * running;
        m::flywheel2 = 127 * running;
    }

    void update_running()
    {
        if (ctrl::ctrl.get_digital_new_press(ctrl::flywheel_toggle))
            running = !running;
    }

    void feed()
    {
        if (ctrl::ctrl.get_digital_new_press(ctrl::feed))
            m::feed.move_relative(360, 127);
    }

    void main() 
    {
        update_running();
        feed();
        set_speed();
    }
} // namespace flywheel