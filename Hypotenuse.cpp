//	Hypotenuse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double getHypotenuse(double sidea, double sideb) {
	return sqrt(((sidea * sidea) + (sideb * sideb)));
}

void displyHed() {
	cout << "The length of the hypotenuse of a right - angled " << endl
		<< "triangle is the square root of the sum of the" << endl
		<< "squares of the other two sides" << endl;
}

void showResult(double hypotenuse) {
	cout << setprecision(2);
	cout << "Hypotenuse length....." << fixed << hypotenuse << endl;
}

void processInputs(double sidea, double sideb) {
	double
		hypotenuse = 0.00;

	hypotenuse = getHypotenuse(sidea, sideb);

	showResult(hypotenuse);
}


void getInputs() {
	double
		sidea = 0.00,
		sideb = 0.00;

	cout << "Enter side a.....";
	cin >> sidea;

	cout << "Enter side b.....";
	cin >> sideb;

	processInputs(sidea, sideb);
}

int main() {
	
	displyHed();
	getInputs();
}

