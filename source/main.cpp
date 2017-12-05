#include "motion.h"
#include "gravity.h"
#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double z;
	string solvefor = "a";



	cout << "Enter variables in following format: " <<endl;
	cout << "Variable" << '\t' << '\t' << "Enter as" << endl;
	cout << "delta x" << '\t' << '\t' << '\t' << "x" << endl;
	cout << "initial velocity" << '\t' << "iv" << endl;
	cout << "final velocity" << '\t' << '\t'<< "fv" << endl;
	cout << "acceleration" << '\t' <<  '\t' << "acc" << endl;
	cout << "time" << '\t' << '\t' << '\t' << "t" << endl;
	cout << endl;

while(solvefor != "q"){
	Motion thing;
	cout << "What are you solving for (or enter q to quit): ";
	cin >> solvefor;
	cout << endl;
	
	if(solvefor == "x"){
		cout << "Enter initial velocity (x comp): ";
		cin >> z;
		thing.setInitVelo_X(z);
		cout << "Enter initial velocity (y comp): ";
		cin >> z;
		thing.setInitVelo_Y(z);
		cout << "Enter final velocity (x comp): ";
		cin >> z;
		thing.setFinalVelo_X(z);
		cout << "Enter final velocity (y comp): ";
		cin >> z;
		thing.setFinalVelo_Y(z);
		cout << "Enter acceleration (x comp): ";
		cin >> z;
		thing.setAcc_X(z);
		cout << "Enter acceleration (y comp): ";
		cin >> z;
		thing.setAcc_Y(z);
		cout << "Enter time: ";
		cin >> z;
		thing.setTime(z);

		thing.has_t_vf_a(thing, 'x');
		thing.has_t_vf_a(thing, 'y');
	}

	else if(solvefor == "iv"){
		cout << "Enter change of distance (x comp): ";
		cin >> z;
		thing.setFinalPos_X(z);
		cout << "Enter change of distance (y comp): ";
		cin >> z;
		thing.setFinalPos_Y(z);
		cout << "Enter final velocity (x comp): ";
		cin >> z;
		thing.setFinalVelo_X(z);
		cout << "Enter final velocity (y comp): ";
		cin >> z;
		thing.setFinalVelo_Y(z);
		cout << "Enter acceleration (x comp): ";
		cin >> z;
		thing.setAcc_X(z);
		cout << "Enter acceleration (y comp): ";
		cin >> z;
		thing.setAcc_Y(z);
		cout << "Enter time: ";
		cin >> z;
		thing.setTime(z);

		thing.has_x_vf_a(thing, 'x');
		thing.has_x_vf_a(thing, 'y');
	}
	else if(solvefor == "fv"){
		cout << "Enter change of distance (x comp): ";
		cin >> z;
		thing.setFinalPos_X(z);
		cout << "Enter change of distance (y comp): ";
		cin >> z;
		thing.setFinalPos_Y(z);
		cout << "Enter initial velocity (x comp): ";
		cin >> z;
		thing.setInitVelo_X(z);
		cout << "Enter initial velocity (y comp): ";
		cin >> z;
		thing.setInitVelo_Y(z);
		cout << "Enter acceleration (x comp): ";
		cin >> z;
		thing.setAcc_X(z);
		cout << "Enter acceleration (y comp): ";
		cin >> z;
		thing.setAcc_Y(z);
		cout << "Enter time: ";
		cin >> z;
		thing.setTime(z);

		thing.has_x_vi_a(thing, 'x');
		thing.has_x_vi_a(thing, 'y');

	}
	else if(solvefor == "acc"){
		cout << "Enter change of distance (x comp): ";
		cin >> z;
		thing.setFinalPos_X(z);
		cout << "Enter change of distance (y comp): ";
		cin >> z;
		thing.setFinalPos_Y(z);
		cout << "Enter initial velocity (x comp): ";
		cin >> z;
		thing.setInitVelo_X(z);
		cout << "Enter initial velocity (y comp): ";
		cin >> z;
		thing.setInitVelo_Y(z);
		cout << "Enter final velocity (x comp): ";
		cin >> z;
		thing.setFinalVelo_X(z);
		cout << "Enter final velocity (y comp): ";
		cin >> z;
		thing.setFinalVelo_Y(z);
		cout << "Enter time: ";
		cin >> z;
		thing.setTime(z);

		thing.has_x_vf_vi(thing, 'x');
		thing.has_x_vf_vi(thing, 'y');
	}
	else if(solvefor == "t"){
		cout << "Enter change of distance (x comp): ";
		cin >> z;
		thing.setFinalPos_X(z);
		cout << "Enter change of distance (y comp): ";
		cin >> z;
		thing.setFinalPos_Y(z);
		cout << "Enter initial velocity (x comp): ";
		cin >> z;
		thing.setInitVelo_X(z);
		cout << "Enter initial velocity (y comp): ";
		cin >> z;
		thing.setInitVelo_Y(z);
		cout << "Enter final velocity (x comp): ";
		cin >> z;
		thing.setFinalVelo_X(z);
		cout << "Enter final velocity (y comp): ";
		cin >> z;
		thing.setFinalVelo_Y(z);
		cout << "Enter acceleration (x comp): ";
		cin >> z;
		thing.setAcc_X(z);
		cout << "Enter acceleration (y comp): ";
		cin >> z;
		thing.setAcc_Y(z);


		thing.has_vf_vi_a(thing, 'x');
		thing.has_vf_vi_a(thing, 'y');
	}
	else{
		cout << "Not able to solve, what a bummer, darn it, rats" << endl;
	}
	cout << endl;
	cout << "Intial Pos: " << thing.getInitPos_X() << "i + " << thing.getInitPos_Y() << "j" << endl;
	cout << "Final Pos: " << thing.getFinalPos_X() << "i + " << thing.getFinalPos_Y() << "j" << endl;
	cout << "Intial Velo: " << thing.getInitVelo_X() << "i + " << thing.getInitVelo_Y() << "j" << endl;
	cout << "Final Velo: " << thing.getFinalVelo_X() << "i + " << thing.getFinalVelo_Y() << "j" << endl;
	cout << "Acc: " << thing.getAcc_X() << "i + " << thing.getAcc_Y() << "j" << endl;
	cout << "Time: " << thing.getTime() << endl;
}


	return 0;
	
}
