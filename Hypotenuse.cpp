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

int main() {
	//	
	double
		sidea = 0.00,
		sideb = 0.00,
		hypotenuse = 0.00;

	cout << "The length of the hypotenuse of a right - angled " << endl
		<< "triangle is the square root of the sum of the" << endl
		<< "squares of the other two sides" << endl;

	cout << "Enter side a.....";
	cin >> sidea;

	cout << "Enter side b.....";
	cin >> sideb;

	hypotenuse = getHypotenuse(sidea, sideb);

	cout << "Hypotenuse length....." << hypotenuse << endl;

}

