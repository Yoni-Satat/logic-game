// MindGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char caName[20];
	int iNumber;
	char cNextMove;
	bool bGameOver = false;
	bool bValidMove;

	cout << "Please type in your name" << endl;
	cin >> caName;
	cout << "Hi " << caName << ", Let's play a game! pick a number between 1 and 10" << endl;
	cin >> iNumber;

	if (iNumber < 0 && iNumber > 10)
	{
		bValidMove = false;
		cout << "This is not a valid number for this game, please try again..." << endl;
	}
	cout << "press Enter to continue" << endl;
	system("pause");
	

    return 0;
}

