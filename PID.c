	        Library for PID Control	


#include "PID.h"

double KPr = (double)DIR * 3.5;
double KIr = (double)DIR * 0.2;
double KDr = (double)DIR * 50.0;

double KPp = (double)DIR * 3.5;
double KIp = (double)DIR * 0.2;
double KDp = (double)DIR * 50.0;

double KPy = (double)DIR * 8.0;
double KIy = (double)DIR * 0.1;
double KDy = (double)DIR * 35.0;

int PID(double setpoint, double *yt, double *iterm, double kp, double ki, double kd, int out_max, int i_max)
{
	//Compute all the working error variables
	double error, dyt;
	double ut;
	
	error = setpoint - yt[0];
	*iterm += ki * error;
	if (*iterm > i_max) *iterm = i_max;
	else if (*iterm < -i_max) *iterm = -i_max;	
	dyt = (yt[0] - yt[1]);	
		
	//Compute PID Output (Input Process)
	ut = kp * error + *iterm - kd * dyt;
	
	if (ut > out_max) ut = out_max;
	else if (ut < -out_max) ut = -out_max;		
	// Save state actual
	yt[1] = yt[0];	
	return (int)ut;
}
