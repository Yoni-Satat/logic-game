// MindGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char caName[20];
	double iNumber;
	char cNextMove;
	bool bGameOver = false;
	bool bValidNumber = true;

	do {

	cout << "Please type in your name" << endl;
	cin >> caName;
	cout << "Hi " << caName << ", Let's play a game! pick a number between 1 and 10" << endl;
	cin >> iNumber;

	while (iNumber < 0 || iNumber > 10) {

			cout << "This is not a valid number for this game, please try again..." << endl;
			cin >> iNumber;		
		}

	cout << "The number you have chosen is: " << iNumber << ", multiply it by 9" << endl;


	bGameOver = true;
	} while (!bGameOver);
	

    return 0;
}

