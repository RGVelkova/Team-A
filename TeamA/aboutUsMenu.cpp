#include <iostream>
#include <string>
#include <conio.h>
#include "mainMenu.h"
#include "aboutUsMenu.h"
using namespace std;

void aboutUs() {
	cout << "=======================================\n";
	cout << "                                         \n";
	cout << "               About us!                 \n";
	cout << "                                         \n";
	cout << "=======================================\n";

	cout << "\n";
	cout << "  +--------------------------------+\n";
	cout << "  |            Our goal            |\n";
	cout << "  +--------------------------------+\n";
	cout << "\n";


	cout << "   We wanted to make" << endl;
	cout << "   an eazy and quick maze game" << endl;
	cout << "   to pass the time" << endl;
	
	cout << "\n";
	cout << "  +--------------------------------+\n";
	cout << "  |            Our mazes           |\n";
	cout << "  +--------------------------------+\n";
	cout << "\n";

	cout << "Our mazes consist of:" << endl;

	cout << "---------------------" << endl;
	cout << "\n";

	cout << "   3 dificulties to choose from, " << endl;
	cout << "   each time you load up a maze" << endl;
	cout << "   you get a brand new generated maze!" << endl;
	
	cout << "\n";
	cout << "  +--------------------------------+\n";
	cout << "  |            Our team            |\n";
	cout << "  +--------------------------------+\n";
	cout << "\n";

	cout << "   Rosica Velkova - 9A - Scrum Trainer " << endl;
	cout << "   Dara Sokrateva - 9A - Frontend Develope" << endl;
	cout << "   Radostin Dimkirichev - 9A - Backend Developer" << endl;
	cout << "   Egor Shevchenov  - 9A - QA" << endl;

	cout << "\nPress Enter to go back: ";
	char ch = _getch();
	cout << ch << endl;
	if (ch == '\r' || ch == '\n') {
		clearScreen();
		mainMenu();
	}
}