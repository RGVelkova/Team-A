#include <iostream>
#include <string>
#include <conio.h>
#include "mainMenu.h"
#include "aboutUsMenu.h"
using namespace std;

void clearScreen();
void exitProgram();


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
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "maze menu" << endl;
			break;
		case 2:
			cout << "how to menu" << endl;
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