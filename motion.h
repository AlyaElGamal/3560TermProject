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

		/*Parameters for these functions are arbitrary and will need reconfigured*/
		/*
		parameters are defined as
		iv - 	intial velocity magnitude
		fv-	final velocity magnitude
		ip-	inital position
		fp-	final position
		ac-	acceleration magnitude
		th- 	theta
		tm- 	time
		*/

		double calcAcc_X(double iv, double fv, double ip, double fp, double tm, double th);
		double calcInitVelo_X(double ac, double fv, double ip, double fp, double tm, double th);
		double calcFinalVelo_X(double iv, double ac, double ip, double fp, double tm, double th);
		double calcInitPos_X(double iv, double fv, double ac, double fp, double tm, double th);
		double calcFinalPos_X(double iv, double fv, double ip, double ac, double tm, double th);

		double calcAcc_Y(double iv, double fv, double ip, double fp, double tm, double th);
		double calcInitVelo_Y(double ac, double fv, double ip, double fp, double tm, double th);
		double calcFinalVelo_Y(double iv, double ac, double ip, double fp, double tm, double th);
		double calcInitPos_Y(double iv, double fv, double ac, double fp, double tm, double th);
		double calcFinalPos_Y(double iv, double fv, double ip, double ac, double tm, double th);

		double calcAcc_Vector(/*parameters*/);
		double calcInitVelo_Vector(/*parameters*/);
		double calcFinalVelo_Vector(/*parameters*/);

		double calc_Time(double iv, double fv, double ip, double fp, double ac, double th);
		double calc_Theta(double iv, double fv, double ip, double fp, double ac, double tm);

		/*Parameters for these equations are correct*/

		double getAcc_X();
		double getInitVelo_X();
		double getFinalVelo_X();
		double getInitPos_X();
		double getFinalPos_X();

		double getAcc_Y();
		double getInitVelo_Y();
		double getFinalVelo_Y();
		double getInitPos_Y();
		double getFinalPos_Y();

		double getTime();
		double getTheta();

	private:
		double acceleration_x;
		double intialvelocity_x;
		double finalvelocity_x;
		double intialposition_x;
		double finalposition_x;

		double acceleration_y;
		double intialvelocity_y;
		double finalvelocity_y;
		double intialposition_y;
		double finalposition_y;

		double acceleration_vector();
		double intialvelocity_vector();
		double finalvelocity_vector();

		double time;
		double theta;	
}

#endif
