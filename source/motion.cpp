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

const double PI  =3.141592653589793238463;

Motion::Motion(){
		acceleration_x = 0;
		initialvelocity_x = 0;
		finalvelocity_x = 0;
		initialposition_x = 0;
		finalposition_x = 0;

		acceleration_y = EARTHG;
		initialvelocity_y = 0;
		finalvelocity_y = 0;
		initialposition_y = 0;
		finalposition_y = 0;

		acceleration_vector = 0;
		initialvelocity_vector = 0;
		initialvelocity_vector = 0;
		finalvelocity_vector = 0;

		time = 0;
		theta = 0;
}

Motion Motion::solve(Motion m){
	has_x_t_vf(m, 'x');
	has_x_t_vi(m, 'x');
	has_x_t_a(m, 'x');
	has_x_vf_vi(m, 'x');
	has_x_vi_a(m, 'x');
	has_x_vf_a(m, 'x');
	has_t_vf_vi(m, 'x');
	has_t_vf_a(m, 'x');
	has_t_vi_a(m, 'x');
	has_vf_vi_a(m, 'x');

	has_x_t_vf(m, 'y');
	has_x_t_vi(m, 'y');
	has_x_t_a(m, 'y');
	has_x_vf_vi(m, 'y');
	has_x_vi_a(m, 'y');
	has_x_vf_a(m, 'y');
	has_t_vf_vi(m, 'y');
	has_t_vf_a(m, 'y');
	has_t_vi_a(m, 'y');
	has_vf_vi_a(m, 'y');
}

void Motion::has_x_t_vf(Motion m, char component){
	if(component == 'x'){
		double vi = ((2 * (m.getFinalPos_X() - m.getInitPos_X())) / m.getTime()) - m.getFinalVelo_X();
		double a = (m.getFinalVelo_X() - vi) / m.getTime();
		m.setInitVelo_X(vi);
		m.setAcc_X(a);
	}
	else if(component == 'y'){
		double vi = ((2 * (m.getFinalPos_Y() - m.getInitPos_Y())) / m.getTime()) - m.getFinalVelo_Y();
		double a = (m.getFinalVelo_Y() - vi) / m.getTime();
		m.setInitVelo_Y(vi);
		m.setAcc_Y(a);
	}
}

void Motion::has_x_t_vi(Motion m, char component){
	if(component == 'x'){
		double vf = (2 * ((m.getFinalPos_X() - m.getInitPos_X()) / m.getTime()) - m.getInitVelo_X());
		double a = (vf - m.getInitVelo_X()) / m.getTime();
		m.setFinalVelo_X(vf);
		m.setAcc_X(a);
	}
	else if(component == 'y'){
		double vf = (2 * ((m.getFinalPos_Y() - m.getInitPos_Y()) / m.getTime()) - m.getInitVelo_Y());
		double a = (vf - m.getInitVelo_Y()) / m.getTime();
		m.setFinalVelo_Y(vf);
		m.setAcc_Y(a);
	}
	
}

void Motion::has_x_t_a(Motion m, char component){
	if(component == 'x'){
		double vi = ((m.getFinalPos_X() - m.getInitPos_X()) - ((m.getAcc_X() * m.getTime() * m.getTime()) / 2) ) / m.getTime();
		double vf = vi + (m.getAcc_X() * m.getTime());
		m.setInitVelo_X(vi);
		m.setFinalVelo_X(vf);
	}
	else if(component == 'y'){
		double vi = ((m.getFinalPos_Y() - m.getInitPos_Y()) - ((m.getAcc_Y() * m.getTime() * m.getTime()) / 2) ) / m.getTime();
		double vf = vi + (m.getAcc_Y() * m.getTime());
		m.setInitVelo_Y(vi);
		m.setFinalVelo_Y(vf);
	}

}

void Motion::has_x_vf_vi(Motion m, char component){
	if(component == 'x'){
		double t = (2 * (m.getFinalPos_X() - m.getInitPos_X())) / (m.getInitVelo_X() + m.getFinalVelo_X());
		double a = (m.getFinalVelo_X() - m.getInitVelo_X()) / t;
		m.setTime(t);
		m.setAcc_X(a);
	}
	else if(component == 'y'){
		double t = (2 * (m.getFinalPos_Y() - m.getInitPos_Y())) / (m.getInitVelo_Y() + m.getFinalVelo_Y());
		double a = (m.getFinalVelo_Y() - m.getInitVelo_Y()) / t;
		m.setTime(t);
		m.setAcc_Y(a);
	}
}

void Motion::has_x_vi_a(Motion m, char component){
	if(component == 'x'){
		double vf = sqrt( pow(m.getInitVelo_X(), 2) + (2 * m.getAcc_X() * (m.getFinalPos_X()-m.getInitPos_X()) ));
		double t = (vf - m.getInitVelo_X()) / m.getAcc_X();
		m.setFinalVelo_X(vf);
		m.setTime(t);
	}
	else if(component == 'y'){
		double vf = sqrt( pow(m.getInitVelo_Y(), 2) + (2 * m.getAcc_Y() * (m.getFinalPos_Y()-m.getInitPos_Y()) ));
		double t = (vf - m.getInitVelo_Y()) / m.getAcc_Y();
		m.setFinalVelo_Y(vf);
		m.setTime(t);
	}
}

void Motion::has_x_vf_a(Motion m, char component){
	if(component == 'x'){
		double vi = sqrt( pow(m.getFinalVelo_X(), 2) - (2 * m.getAcc_X() * (m.getFinalPos_X()-m.getInitPos_X()) ));
		double t = (m.getFinalVelo_X() - vi) / m.getAcc_X();
		m.setInitVelo_X(vi);
		m.setTime(t);
	}
	else if(component == 'y'){
		double vi = sqrt( pow(m.getFinalVelo_Y(), 2) - (2 * m.getAcc_Y() * (m.getFinalPos_Y()-m.getInitPos_Y()) ));
		double t = (m.getFinalVelo_Y() - vi) / m.getAcc_Y();
		m.setInitVelo_Y(vi);
		m.setTime(t);
	}
}

void Motion::has_t_vf_vi(Motion m, char component){
	if(component == 'x'){
		double x = ((m.getInitVelo_X() + m.getFinalVelo_X()) / 2) * m.getTime();
		double a = (m.getFinalVelo_X() - m.getInitVelo_X()) / m.getTime();
		m.setAcc_X(a);
		if (m.getInitPos_X() == NULL || m.getInitPos_X() == 0){
			m.setInitPos_X(0);
			m.setFinalPos_X(x);
		}
		else m.setFinalPos_X(m.getInitPos_X() + x);
	}
	else if(component == 'y'){
		double x = ((m.getInitVelo_Y() + m.getFinalVelo_Y()) / 2) * m.getTime();
		double a = (m.getFinalVelo_Y() - m.getInitVelo_Y()) / m.getTime();
		m.setAcc_Y(a);
		if (m.getInitPos_Y() == NULL || m.getInitPos_Y() == 0){
			m.setInitPos_Y(0);
			m.setFinalPos_Y(x);
		}
		else m.setFinalPos_Y(m.getInitPos_Y() + x);
	}
}

void Motion::has_t_vf_a(Motion m, char component){
	if(component == 'x'){
		double vi = m.getFinalVelo_X() - (m.getAcc_X() * m.getTime());
		double x = ((vi + m.getFinalVelo_X()) / 2) * m.getTime();
		m.setInitVelo_X(vi);
		if (m.getInitPos_X() == NULL || m.getInitPos_X() == 0){
			m.setInitPos_X(0);
			m.setFinalPos_X(x);
		}
		else m.setFinalPos_X(m.getInitPos_X() + x);
	}
	else if(component == 'y'){
		double vi = m.getFinalVelo_Y() - (m.getAcc_Y() * m.getTime());
		double x = ((vi + m.getFinalVelo_Y()) / 2) * m.getTime();
		m.setInitVelo_Y(vi);
		if (m.getInitPos_Y() == NULL || m.getInitPos_Y() == 0){
			m.setInitPos_Y(0);
			m.setFinalPos_Y(x);
		}
		else m.setFinalPos_Y(m.getInitPos_Y() + x);
	}
}

void Motion::has_t_vi_a(Motion m, char component){
	if(component == 'x'){
		double x = (m.getInitVelo_X() * m.getTime()) + ((m.getAcc_X() * pow(m.getTime(), 2)) / 2);
		double vf = m.getInitVelo_X() + (m.getAcc_X() * m.getTime());
		m.setFinalVelo_X(vf);
		if (m.getInitPos_X() == NULL || m.getInitPos_X() == 0){
			m.setInitPos_X(0);
			m.setFinalPos_X(x);
		}
		else m.setFinalPos_X(m.getInitPos_X() + x);
	}
	else if(component == 'y'){
		double x = (m.getInitVelo_Y() * m.getTime()) + ((m.getAcc_Y() * pow(m.getTime(), 2)) / 2);
		double vf = m.getInitVelo_Y() + (m.getAcc_Y() * m.getTime());
		m.setFinalVelo_Y(vf);
		if (m.getInitPos_Y() == NULL || m.getInitPos_Y() == 0){
			m.setInitPos_Y(0);
			m.setFinalPos_Y(x);
		}
		else m.setFinalPos_Y(m.getInitPos_Y() + x);
	}
}

void Motion::has_vf_vi_a(Motion m, char component){
	if(component == 'x'){
		double t = (m.getFinalVelo_X() - m.getInitVelo_X()) / m.getAcc_X();
		double x = ((m.getInitVelo_X() + m.getFinalVelo_X()) / 2) * t;
		m.setTime(t);
		if (m.getInitPos_X() == NULL || m.getInitPos_X() == 0){
			m.setInitPos_X(0);
			m.setFinalPos_X(x);
		}
		else m.setFinalPos_X(m.getInitPos_X() + x);
	}
	else if(component == 'y'){
		double t = (m.getFinalVelo_Y() - m.getInitVelo_Y()) / m.getAcc_Y();
		double x = ((m.getInitVelo_Y() + m.getFinalVelo_Y()) / 2) * t;
		m.setTime(t);
		if (m.getInitPos_Y() == NULL || m.getInitPos_Y() == 0){
			m.setInitPos_Y(0);
			m.setFinalPos_Y(x);
		}
		else m.setFinalPos_Y(m.getInitPos_Y() + x);
	}
}

double Motion::getAcc_X(){ return acceleration_x;}
double Motion::getInitVelo_X(){ return initialvelocity_x;}
double Motion::getFinalVelo_X(){ return finalvelocity_x;}
double Motion::getInitPos_X(){ return initialposition_x;}
double Motion::getFinalPos_X(){ return finalposition_x;}

double Motion::getAcc_Y(){ return acceleration_y;}
double Motion::getInitVelo_Y(){ return initialvelocity_y;}
double Motion::getFinalVelo_Y(){ return finalvelocity_y;}
double Motion::getInitPos_Y(){ return initialposition_y;}
double Motion::getFinalPos_Y(){ return finalposition_y;}

double Motion::getTime(){ return time;}
double Motion::getTheta(){ return theta;}


void Motion::setAcc_X(double c){ acceleration_x=c;}
void Motion::setInitVelo_X(double c){ initialvelocity_x=c;}
void Motion::setFinalVelo_X(double c){ finalvelocity_x=c;}
void Motion::setInitPos_X(double c){ initialposition_x=c;}
void Motion::setFinalPos_X(double c){ finalposition_x=c;}

void Motion::setAcc_Y(double c){ acceleration_y=c;}
void Motion::setInitVelo_Y(double c){ initialvelocity_y=c;}
void Motion::setFinalVelo_Y(double c){ finalvelocity_y=c;}
void Motion::setInitPos_Y(double c){ initialposition_y=c;}
void Motion::setFinalPos_Y(double c){ finalposition_y=c;}

void Motion::setTime(double c){ time=c;}
void Motion::setTheta(double c){ theta=c;}

Motion Motion::input(bool inputType){
	Motion moe;

	double x, y;
	if(inputType == false){ // if the input is in magnitude and angle
		MagAndAngle_to_xAndY(acceleration_x, acceleration_y, x, y);
	}
	else{
		x = acceleration_x;
		y = acceleration_y;
	}
	moe.setAcc_X(x);
	moe.setAcc_Y(y);

	if(inputType == false){ // if the input is in magnitude and angle
		MagAndAngle_to_xAndY(initialvelocity_x, initialvelocity_y, x, y);
	}
	else{
		x = initialvelocity_x;
		y = initialvelocity_y;
	}
	moe.setInitVelo_X(x);
	moe.setInitVelo_Y(y);

	if(inputType == false){ // if the input is in magnitude and angle
		MagAndAngle_to_xAndY(finalvelocity_x, finalvelocity_y, x, y);
	}
	else{
		x = finalvelocity_x;
		y = finalvelocity_y;
	}	
	moe.setFinalVelo_X(x);
	moe.setFinalVelo_Y(y);

	if(inputType == false){ // if the input is in magnitude and angle
		MagAndAngle_to_xAndY(initialposition_x, initialposition_y, x, y);
	}
	else{
		x = initialposition_x;
		y = initialposition_y;
	}
	moe.setInitPos_X(x);
	moe.setInitPos_Y(y);

	if(inputType == false){ // if the input is in magnitude and angle
		MagAndAngle_to_xAndY(finalposition_x, finalposition_y, x, y);
	}
	else{
		x = finalposition_x;
		y = finalposition_y;
	}
	moe.setFinalPos_X(x);
	moe.setFinalPos_Y(y);

	return moe;
}

void Motion::MagAndAngle_to_xAndY(const double magnitude, const double angle, double& x, double& y){
	x = cos(angle * PI / 180.0);
	y = sin(angle * PI / 180.0);
}

void Motion::output(){}
