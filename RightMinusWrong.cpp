//  RightMinusWrong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



void showresults(double percentvalue) {
	//------------------------------------------
	//	used to show final grade
	cout << setprecision(2);

	cout << "Grade....." << fixed << percentvalue << "%" << endl;
}

int getwronganswers(int questions, int correct) {
	//------------------------------------------
	// get the wrong answers count
	int 
		wronganswers = (questions - correct);

	cout << "Wrong answers....." << wronganswers << endl;
	return wronganswers;
}

double getpercentage(int questions, int correct, int wrong) {
	//------------------------------------------
	//	show the average
	double
		totalpoints = static_cast<double>((((correct * 1)-(wrong * 0.25))*100));

	return (totalpoints/questions);
}

void getinput(int &questions, int &correct) {
	//------------------------------------------
	//	get inputs from the user
	cout << "# of questions.....";
	cin >> questions;

	cout << "Correct answers.....";
	cin >> correct;
}

void askuser(char &userentry) {
	//------------------------------------------
	//	ask if the user wants to try again
	cout << endl;
	cout << "Another run [y/n]?.....";
	cin >> userentry;
}

bool validresponse(char userentry) {
	//------------------------------------------
	//	exit if the user says n
	if (tolower(userentry) == 'n' or tolower(userentry) == 'y')
		return true;
	else {
		cout << "\t*****Invalid entry....." << endl << endl;
		return false;
	}
}

bool runagain(char userentry) {
	//------------------------------------------
	//	validate the y/n response
	if (userentry == 'n')
		return false;
	else
		return true;
}

int main()
//------------------------------------------
//	main program
{
	int
		totalnumofquestions = 0,
		questionsansweredcorrect = 0,
		questionsansweredwrong = 0;

	double
		percenrage = 0.00;

	char
		response = 'y';

	do {
		getinput(totalnumofquestions, questionsansweredcorrect);
		showresults(getpercentage(totalnumofquestions, questionsansweredcorrect, getwronganswers(totalnumofquestions, questionsansweredcorrect)));
		do {
			askuser(response);
		} while (!(validresponse(response)));
	}while  (runagain(response));
	
	
	return 0;
}

