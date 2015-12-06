	      //  Library for PID Control	

extern double KPr, KIr, KDr;
extern double KPp, KIp, KDp;
extern double KPy, KIy, KDy;


#ifndef PID_H_
#define PID_H_


// Configure PID
#define OUT_MAX_RP		 150			// Out PID maximum
#define OUT_MAX_Y		 150			// Out PID maximum
#define I_MAX_RP		 80			// Out I_term maximum
#define I_MAX_Y			 80			// Out I_term maximum
#define DIR				 1				// Direct PID Direction
//#define DIR			-1				// Inverse PID Direction


// Define functios
int PID(double setpoint, double *yt, double *iterm, double kp, double ki, double kd, int out_max, int i_max);		// PID process

#endif /* PID_H_ */
