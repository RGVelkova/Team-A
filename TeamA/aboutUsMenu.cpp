#include <iostream>
#include <string>
#include <conio.h>
#include "mainMenu.h"
#include "aboutUsMenu.h"
using namespace std;

void aboutUs() {
	cout << "About us!" << endl;

	cout << "Our Goal" << endl << "-----------" << endl;
	cout << "We wanted to make an eazy and quick maze game to pass the time" << endl;
	
	cout << "Our mazes consist of:" << endl << "-----------" << endl;
	cout << "3 dificulties to choose from, each time you load up a maze you get a brand new generated maze!" << endl;
	
	cout << "Our Team" << endl << "-----------" << endl;
	cout << "Rosica Velkova - 9A - Scrum Trainer " << endl;
	cout << "Dara Sokrateva - 9A - Frontend Develope" << endl;
	cout << "Radostin Dimkirichev - 9A - Backend Developer" << endl;
	cout << "Egor Shevchenov  - 9A - QA" << endl;

	cout << "\nPress Enter to go back: ";
	char ch = _getch();
	cout << ch << endl;
	if (ch == '\r' || ch == '\n') {
		clearScreen();
		mainMenu();
	}
}