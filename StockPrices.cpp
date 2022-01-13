//  StockPrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void getinputs(int &wholepart, int &num, int &denom, int &shares) {

	cout << "Whole-dollar portion of the price......";
	cin >> wholepart;

	cout << "Numerator.....";
	cin >> num;

	cout << "Denominator.....";
	cin >> denom;

	cout << "Total shares.....";
	cin >> shares;


}

double getstockvalue(double dollar, double numerator, double denominator, double totalshares) {
	return (static_cast<double>((dollar * denominator + numerator)/(denominator * totalshares)));
}

int main()
{
	int
		dollar = 0,
		numerator = 0,
		denominator = 0,
		totalshares = 0;

	getinputs(dollar, numerator, denominator, totalshares);
	cout << setprecision(2);
	cout << "Cost of a single stock....." << fixed << getstockvalue(dollar, numerator, denominator, totalshares);

	return 0;
}
