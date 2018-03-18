// MindGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char caName[20];
	double iNumber;
	bool bGameOver = false;
	bool bValidNumber = true;
	char cPlayAgain;
	char cLineBreak = '\n';

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
	cout << cLineBreak;
	cout << " - Add togethr the integers combing the new number (for example 24, 2 + 4 = 6" << endl;
	cout << cLineBreak;
	cout << " - Deduct 5 from the outcome (for example 6 -5 = 1" << endl;
	cout << cLineBreak;
	cout << "You are doing great " << caName << "!" << endl;
	cout << cLineBreak;
	cout << " - Find the English character in the index your last result is (in the example we have 1, so A is the matching character" << endl;
	cout << cLineBreak;
	cout << " - Think of a country that start with the character you found" << endl;
	cout << cLineBreak;
	cout << " - Now, think of an animal starting with the second character of the country you have chosen" << endl;
	cout << cLineBreak;
	cout << "So we had in mind Denmark and Elephant " << caName << ", what about you?" << endl;
	cout << cLineBreak;
	cout << "GAME OVER" << endl;
	cout << cLineBreak;
	cout << "Press y to play again or q to quit the game" << endl;
	cin >> cPlayAgain;
	if (cPlayAgain == 'y') {
		bGameOver = false;
	} else if (cPlayAgain == 'q') {
		cout << "Thanks for playing, hope to see you soon" << endl;
		bGameOver = true;
	}

	} while (!bGameOver);
	

    return 0;
}

