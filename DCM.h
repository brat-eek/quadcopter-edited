//  Header file Library for DCM matrix attitude 

extern double a_result[3];			// Roll, pitch, yaw
extern double gyro;					// Move reference for Yaw control


#ifndef DCM_H_
#define DCM_H_

#define Kp_ROLLPITCH 0.1		// Pitch&Roll Proportional Gain
#define Ki_ROLLPITCH 0.00001	// Pitch&Roll Integrator Gain

#define LED_READY	PINB7		// LED On for Ready only for ATmega168

void matrix_update(unsigned char t, double gyro);
void sample_meters(void);
void matrix_multiply(double a[3][3], double b[3][3], double mat[3][3]);
void euler_angles(void);
void normalize(void);
double vector_dot_product(double *vector1, double *vector2);
void vector_cross_product(double v1[3], double v2[3], double out[3]);
void vector_scalar(double vectorin[3], double scalar, double *vectorout);
void vector_add(double *vectorin, double vector_added[3]);
void drift_correction(void);
void gyro_offset(void);
int lpf(int pv_sf, int pv_fil_ant, double kf);

#endif /* DCM_H_ */
