#include "motion.h"
#include "gravity.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double z;

	Motion thing;
	cout << "Enter x comp of intial velocity or enter '321': ";
	cin >> z;
	if(z != 321) thing.setInitVelo_X(z);
	cout << "Enter y comp of intial velocity or enter '321': ";
	cin >> z;
	if(z != 321)thing.setInitVelo_Y(z);
	cout << "Enter x comp of final velocity or enter '321': ";
	cin >> z;
	if(z != 321)thing.setFinalVelo_X(z);
	cout << "Enter y comp of final velocity or enter '321': ";
	cin >> z;
	if(z != 321)thing.setFinalVelo_Y(z);
	cout << "Enter x comp of intial postion or enter '321': ";
	cin >> z;
	if(z != 321)thing.setInitPos_X(z);
	cout << "Enter y comp of intial position or enter '321': ";
	cin >> z;
	if(z != 321)thing.setInitPos_Y(z);
	cout << "Enter x comp of final position or enter '321': ";
	cin >> z;
	if(z != 321)thing.setFinalPos_X(z);
	cout << "Enter y comp of final position or enter '321': ";
	cin >> z;
	if(z != 321)thing.setFinalPos_Y(z);
	cout << "Enter x comp of acceleration or enter '321': ";
	cin >> z;
	if(z != 321)thing.setAcc_X(z);
	cout << "Enter y comp of acceleration or enter '321': ";
	cin >> z;
	if(z != 321)thing.setAcc_Y(z);
	cout << "Enter time or enter '321': ";
	cin >> z;
	if(z != 321)thing.setTime(z);

	thing = thing.solve(thing);

	cout << "Intial Pos: " << thing.getInitPos_X() << "i + " << thing.getInitPos_Y() << "j" << endl;
	cout << "Final Pos: " << thing.getFinalPos_X() << "i + " << thing.getFinalPos_Y() << "j" << endl;
	cout << "Intial Velo: " << thing.getInitVelo_X() << "i + " << thing.getInitVelo_Y() << "j" << endl;
	cout << "Final Velo: " << thing.getFinalVelo_X() << "i + " << thing.getFinalVelo_Y() << "j" << endl;
	cout << "Acc: " << thing.getAcc_X() << "i + " << thing.getAcc_Y() << "j" << endl;
	cout << "Time: " << thing.getTime() << endl;

	return 0;
	
}
