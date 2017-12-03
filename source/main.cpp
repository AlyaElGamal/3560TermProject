#include "motion.h"
#include "gravity.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int z;

	Motion thing;
	cout << "Enter x comp of intial velocity or press enter: ";
	cin >> z;
	thing.setInitVelo_X(z);
	cout << "Enter y comp of intial velocity or press enter: ";
	cin >> z;
	thing.setInitVelo_Y(z);
	cout << "Enter x comp of final velocity or press enter: ";
	cin >> z;
	thing.setFinalVelo_X(z);
	cout << "Enter y comp of final velocity or press enter: ";
	cin >> z;
	thing.setFinalVelo_Y(z);
	cout << "Enter x comp of intial postion or press enter: ";
	cin >> z;
	thing.setInitPos_X(z);
	cout << "Enter y comp of intial position or press enter: ";
	cin >> z;
	thing.setInitPos_Y(z);
	cout << "Enter x comp of final position or press enter: ";
	cin >> z;
	thing.setFinalPos_X(z);
	cout << "Enter y comp of final position or press enter: ";
	cin >> z;
	thing.setFinalPos_Y(z);
	cout << "Enter x comp of acceleration or press enter: ";
	cin >> z;
	thing.setAcc_X(z);
	cout << "Enter y comp of acceleration or press enter: ";
	cin >> z;
	thing.setAcc_Y(z);
	cout << "Enter time or press enter: ";
	cin >> z;
	thing.setTime(z);

	thing.solve(thing);
	
	
}
