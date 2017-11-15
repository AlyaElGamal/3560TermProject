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
