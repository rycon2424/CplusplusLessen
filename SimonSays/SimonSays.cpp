#include "SimonSays.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>
#include <windows.h>
#include <time.h>

using namespace std;

SimonSays::SimonSays()
{
	cout << "SimonSays Initialized" << "\n";
	cout << " " << "\n";
}

SimonSays::~SimonSays()
{
	cout << "SimonSays Destroyed" << "\n";
}

void SimonSays::Play()
{
	srand(time(NULL)); // Random seed
	int charLength = 3; // Begin length of ints
	for (;;) // ;; so the for loop is endless until a "break"
	{
		list<string> simonSaysList;
		for (int i = 0; i < charLength; i++)
		{
			int randomInt = rand() % 9 + 1;
			simonSaysList.push_back(to_string(randomInt));
		}
		charLength++;

		string allNumbers;
		for (string t : simonSaysList) // Foreach string character print it every second in the console
		{
			allNumbers += t;
			cout << t;
			Sleep(1000); // Waits 1 second
		}
		Sleep(2000);

		system("CLS"); // Clears console

		char playerInput[256];
		cin >> playerInput;

		system("CLS");

		string inputToString(playerInput); // Convert char to string

		Sleep(1000);

		if (inputToString == allNumbers)
		{
			cout << "You were correct! " << "You typed: " << inputToString << " answer was " << allNumbers << "\n";
			Sleep(3000);
		}
		else
		{
			cout << "You failed try again! " << "You typed: " << inputToString << " answer was " << allNumbers << "\n";
			Sleep(3000);
			break;
		}
		system("CLS");
	}
}