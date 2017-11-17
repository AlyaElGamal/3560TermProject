/********************************************************************************                
Authors:      	Ignatius Smith                                                  
                Ohio University, B.S.C.S. May 2020                             
	        is116615@ohio.edu   
		
		Jacob Ramsey
                Ohio University, B.S.C.S. May 2020                             
	        jr408614@ohio.edu  

		Alya ElGamal

		Charlie Harover
                                            
File:           motion.cpp                                            
Description:    This file includes the function declarations for projectile motion
		equations.                                             
Last Modified:  09 November 2017                                                
********************************************************************************/

#include "motion.h"
#include "gravity.h"
#include <cmath>
#include <cstdlib>

using namespace std;

Motion::Motion(){
		acceleration_x = 0;
		intialvelocity_x = 0;
		finalvelocity_x = 0;
		intialposition_x = 0;
		finalposition_x = 0;

		acceleration_y = EARTHG;
		intialvelocity_y = 0;
		finalvelocity_y = 0;
		intialposition_y = 0;
		finalposition_y = 0;

		acceleration_vector() = 0;
		intialvelocity_vector() = 0;
		finalvelocity_vector() = 0;

		time = 0;
		theta = 0;
}

double getAcc_X(){ return acceleration_x;}
double getInitVelo_X(){ return initialvelocity_x;}
double getFinalVelo_X(){ return finalvelocity_x;}
double getInitPos_X(){ return initialposition_x;}
double getFinalPos_X(){ return finalposition_x;}

double getAcc_Y(){ return acceleration_y;}
double getInitVelo_Y(){ return initialvelocity_y;}
double getFinalVelo_Y(){ return finalvelocity_y;}
double getInitPos_Y(){ return initialposition_y;}
double getFinalPos_Y(){ return finalposition_y;}

double getTime(){ return time;}
double getTheta(){ return theta;}


void setAcc_X(double c){ acceleration_x=c;}
void setInitVelo_X(double c){ initialvelocity_x=c;}
void setFinalVelo_X(double c){ finalvelocity_x=c;}
void setInitPos_X(double c){ initialposition_x=c;}
void setFinalPos_X(double c){ finalposition_x=c;}

void setAcc_Y(double c){ acceleration_y=c;}
void setInitVelo_Y(double c){ initialvelocity_y=c;}
void setFinalVelo_Y(double c){ finalvelocity_y=c;}
void setInitPos_Y(double c){ initialposition_y=c;}
void setFinalPos_Y(double c){ finalposition_y=c;}

void setTime(double c){ time=c;}
void setTheta(double c){ theta=c;}
