#include <iostream>
#include <string>
#include "mainMenu.h"
using namespace std;

void clearScreen();
void exitProgram();

void mainMenu() {
	int choice;
	do {
		clearScreen();

		cout << "Welcome to the Maze quest" << endl;
		cout << "Please select an option:" << endl;
		cout << "1. Play!" << endl;
		cout << "2. How to?" << endl;
		cout << "3. About us" << endl;
		cout << "4. Exit" << endl;
		
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
			cout << "about us menu" << endl;
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