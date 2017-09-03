#include <unistd.h>
#include "Motor.h"

int main(void)
{
	Motor motor;
	motor.MotorSwOn();
	motor.putMotorHz(1000,1000);
	sleep(5);
	motor.MotorSwOff();
	return 0;
}