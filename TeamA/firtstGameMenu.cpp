#include <iostream>
#include "mainMenu.h"
#include "firstGameMenu.h"
#include "easyMaze.h"
#include "mediumMaze.h"
#include "hardMaze.h"
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
			clearScreen();
			easyMaze();
			break;
		case 2:
			clearScreen();
			mediumMaze();
			break;
		case 3:
			clearScreen();
			hardMaze();
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

