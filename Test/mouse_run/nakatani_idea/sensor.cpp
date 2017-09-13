#include <iostream>
#include <fstream>
#include "../include/mouse.h"

using namespace std;

void Mouse::get_sensor_sts(int *sen_sts)
{
	ifstream ifs("/dev/rtlightsensor0");
	ifs >> sen_sts[0] >> sen_sts[1] >> sen_sts[2] >> sen_sts[3];
	
	/*
	// Debug
	cout 	<< sen_sts[0] << " " 
		<< sen_sts[1] << " "  
		<< sen_sts[2] << " " 
		<< sen_sts[3] << endl;
	//*/
}