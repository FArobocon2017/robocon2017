#include <iostream>
#include <fstream>
#include "Motor.h"

using namespace std;

void Motor::MotorSwOn()
{
	ofstream motor_sw("/dev/rtmotoren0");
	motor_sw << 1;
	motor_sw.close();
}

void Motor::MotorSwOff()
{
	ofstream motor_sw("/dev/rtmotoren0");
	motor_sw << 0;
	motor_sw.close();
}

void Motor::putMotorHz(int lvalue, int rvalue)
{
	ofstream l_motor("/dev/rtmotor_raw_l0");
	ofstream r_motor("/dev/rtmotor_raw_r0");
	l_motor << lvalue;
	r_motor << rvalue;
	l_motor.close();
	r_motor.close();
}