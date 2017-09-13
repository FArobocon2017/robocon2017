#include <iostream>
#include <fstream>
#include "../include/mouse.h"

using namespace std;

void Mouse::get_tactsw_sts(int *tsw_sts)
{
	ifstream ifs0("/dev/rtswitch0");
	ifs0 >> tsw_sts[0];
	ifstream ifs1("/dev/rtswitch1");
	ifs1 >> tsw_sts[1];
	ifstream ifs2("/dev/rtswitch2");
	ifs2 >> tsw_sts[2];

	/*
	// Debug
	cout 	<< tsw_sts[0] << " " 
		<< tsw_sts[1] << " "  
		<< tsw_sts[2] << endl;
	//*/
}