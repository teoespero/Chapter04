//  Hypotenuse.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	return sqrt(pow(sidea,2.0) + pow(sideb,2.0));
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

void keeprunning(char &response) {
	cout << "Run it again.....";
	cin >> response;
}

bool stopit(char answer) {
	if (tolower(answer) == 'y')
		return true;
	else if (tolower(answer) == 'n')
		return false;
	else {
		cout << "\t***Invalid response..." << endl;
		return false;
	}
}

int main() {
	
	char
		doitagain = 'y';

	do {
		displyHed();
		getInputs();
		keeprunning(doitagain);
	} while (stopit(doitagain));
	
}

