/********************************************************************************                
Authors:      	Ignatius Smith                                                  
                Ohio University, B.S.C.S. May 2020                             
	        is116615@ohio.edu   
		
		Jacob Ramsey
		Ohio Univeristy, B.S.C.S May 2020
		jr408614@ohio.edu

		Alya ElGamal

		Charlie Harover
                                            
File:           motion.h                                                         
Description:    This file includes the function declarations for projectile motion
		equations.                                             
Last Modified:  17 November 2017                                                
********************************************************************************/

#include <cstdlib>
#include <cmath>
#include <string>
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

		//calculation functions

		Motion solve(Motion m);
		
		void has_x_t_vf(Motion m, char component);
		void has_x_t_vi(Motion m, char component);
		void has_x_t_a(Motion m, char component);
		void has_x_vf_vi(Motion m, char component);
		void has_x_vi_a(Motion m, char component);
		void has_x_vf_a(Motion m, char component);
		void has_t_vf_vi(Motion m, char component);
		void has_t_vf_a(Motion m, char component);
		void has_t_vi_a(Motion m, char component);
		void has_vf_vi_a(Motion m, char component);

		/*Parameters for these equations are correct*/

		//accessor functions
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
	
		//assignment functions
		void setAcc_X(double c);
		void setInitVelo_X(double c);
		void setFinalVelo_X(double c);
		void setInitPos_X(double c);
		void setFinalPos_X(double c);

		void setAcc_Y(double c);
		void setInitVelo_Y(double c);
		void setFinalVelo_Y(double c);
		void setInitPos_Y(double c);
		void setFinalPos_Y(double c);

		void setTime(double c);
		void setTheta(double c);

		Motion input(bool inputType);
		void output();

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

		double acceleration_vector;
		double intialvelocity_vector;
		double finalvelocity_vector;

		double time;
		double theta;	
};

#endif
