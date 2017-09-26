#include <iostream>
#include <fstream>
#include "../include/mouse.h"

using namespace std;

void Move::kasoku(int sokudo)
{
	Mouse	m1;
	
	m1.ctr_motor_hz(sokudo/4, sokudo/4);
	m1.ctr_motor_hz(sokudo/3, sokudo/3);
	m1.ctr_motor_hz(sokudo/2, sokudo/2);
	m1.ctr_motor_hz(sokudo, sokudo);
}



void Move::migisennkai(void)
{
	Mouse	m1;
	
	m1.ctr_motor_hz(sokudo, sokudo*-1);
}