#ifndef _MOTOR_
#define _MOTOR_

class Mouse
{
public:
	/* Tact Switch */
	void get_tactsw_sts(int *tsw_sts);
	void get_tactsw0_sts(int *tsw0_sts);
	void get_tactsw1_sts(int *tsw1_sts);
	void get_tactsw2_sts(int *tsw2_sts);

	/* Sensor */
	void get_sensor_sts(int *sen_sts);
	
	/* Buzzer */
	
	
	/* Motor */
	void motor_sw_on(void);
	void motor_sw_off(void);
	void ctr_motor_hz(int l_val, int r_val);
	void ctr_motor_stop(void);
};

#endif