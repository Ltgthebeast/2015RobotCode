#include "OI.h"

OI::OI()
{
	Joystick1 = new Joystick(1);
	Joystick2 = new Joystick(2);
	Joystick3 = new Joystick(3);

	Button1 = new JoystickButton(Joystick1, 1);
	Button1->WhileHeld(new turnleft);
	// Process operator interface input here.
}
