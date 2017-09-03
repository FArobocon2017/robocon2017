#ifndef _MOTOR_
#define _MOTOR_

class Motor
{
public:
	void MotorSwOn();
	void MotorSwOff();
	void putMotorHz(int lvalue, int rvalue);	
};

#endif