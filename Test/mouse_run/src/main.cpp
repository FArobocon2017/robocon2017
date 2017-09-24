#include <iostream>
#include <unistd.h>
#include "../include/mouse.h"

using namespace std;

int main(void)
{
	Mouse	m1;
	int	tsw_sts[4]={0};
	int	sen_sts[4]={0};

	m1.motor_sw_on();	
	while(1)
	{
		m1.get_sensor_sts(sen_sts);
		if(sen_sts[0] > 100 && sen_sts[1] > 100 && sen_sts[2] > 100 && sen_sts[3] > 100){
			m1.ctr_motor_stop();
		}else{
			m1.ctr_motor_hz(1000,1000);
		}

		m1.get_tactsw_sts(tsw_sts);
		if(tsw_sts[0] == 0){
			break;
		}
	}

	m1.motor_sw_off();

	return 0;
}