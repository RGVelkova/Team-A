#include <iostream>
#include <string>
#include <conio.h>
#include "mainMenu.h"
#include "firstGameMenu.h"
using namespace std;

void firstGameMenu() {
	int choice;
	do {
		clearScreen();

		cout << "=======================================" << endl;
		cout << endl;
		cout << "       Choose game difficulty:" << endl;
		cout << endl;
		cout << "=======================================" << endl;
		cout << endl;
		cout << "     +--------------------------+\n";
		cout << "     |          options         |\n";
		cout << "     +--------------------------+\n";
		cout << "     |                          |\n";
		cout << "     |   [1]  Easy  10x10       |\n";
		cout << "     |   [2]  Medium  25x25     |\n";
		cout << "     |   [3]  Hard  50x50       |\n";
		cout << "     |   [4]  Back to Main Menu |\n";
		cout << "     |                          |\n";
		cout << "     +--------------------------+\n";
		cout << endl;
		cout << "Enter your choice: ";
		choice = readNumericChoice();	
		switch (choice) {
		case 1:
			cout << "easy" << endl;
			break;
		case 2:
			cout << "medium" << endl;
			break;
		case 3:
			cout << "hard" << endl;
			break;
		case 4:
			clearScreen();
			mainMenu();	
			break;
		default:
			cout << "Invalid choice. Please try again." << endl;
			mainMenu();

			break;
		}
	} while (choice != 4);
}

