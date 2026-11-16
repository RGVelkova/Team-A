#include <iostream>
#include <conio.h>
#include "mainMenu.h"
#include "aboutUsMenu.h"
#include "firstGameMenu.h"	
#include "howToPage.h"
using namespace std;

void clearScreen();
void exitProgram();

// Read a single key and return its numeric value (0-9), -2 for Enter, or -1 for other keys
int readNumericChoice() {
	char ch = _getch();
	cout << ch << endl;
	if (ch == '\r' || ch == '\n')
		return -2;
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	return -1;
}


void mainMenu() {
	int choice;
	do {
		clearScreen();

		cout << "=======================================" << endl;
		cout << endl;
		cout << "       Welcome to the Maze game!" << endl;
		cout << endl;
		cout << "=======================================" << endl;
		cout << endl;
		cout << "     +--------------------------+\n";
		cout << "     |       MAIN MENU          |\n";
		cout << "     +--------------------------+\n";
		cout << "     |                          |\n";
		cout << "     |   [1]  Play Game         |\n";
		cout << "     |   [2]  How To Play       |\n";
		cout << "     |   [3]  About Us          |\n";
		cout << "     |   [4]  Exit Game         |\n";
		cout << "     |                          |\n";
		cout << "     +--------------------------+\n";
		cout << endl;

		cout << "Enter your choice: ";
		choice = readNumericChoice();

		switch (choice) {
		case 1:
			clearScreen();
			firstGameMenu();
		case 2:
			clearScreen();
			showHowToPlay();
			break;
		case 3:
			clearScreen();
			aboutUs();
			break;
		case 4:
			cout << "Exiting the menu." << endl;
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
			mainMenu();

			break;
		}
	} while (choice != 4);
}

void exitProgram() {
	cout << "Exiting the program." << endl;
	exit(0);
}

void clearScreen() {
	system("cls");
}