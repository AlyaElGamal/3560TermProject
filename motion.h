/********************************************************************************                
Authors:      	Ignatius Smith                                                  
                Ohio University, B.S.C.S. June 2020                             
	        is116615@ohio.edu   
		
		Jacob Ramsey

		Alya ElGamal

		Charlie Harover
                                            
File:           motion.h                                                         
Description:    This file includes the function declarations for projectile motion
		equations.                                             
Last Modified:  09 November 2017                                                
********************************************************************************/

#include <cstdlib>
#include <cmath>
#ifndef MOTION_H
#define MOTION_H

using namespace std;

class Motion{
	public:
		Motion();
		double calcAcc(double iv, double fv, double ip, double fp, double tm, double th);
		double calcInitVelo(double ac, double fv, double ip, double fp, double tm, double th);
		double calcFinalVelo(double iv, double ac, double ip, double fp, double tm, double th);
		double calcInitPos(double iv, double fv, double ac, double fp, double tm, double th);
		double calcFinalPos(double iv, double fv, double ip, double ac, double tm, double th);
		double calcTime(double iv, double fv, double ip, double fp, double ac, double th);
		double calcTheta(double iv, double fv, double ip, double fp, double ac, double tm);

	private:
		double acceleration;
		double intial_velocity;
		double final_velocity;
		double intial_position;
		double final_position;
		double time;	
}

#endif
