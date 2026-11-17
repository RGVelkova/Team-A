#include <conio.h>
#include <iomanip>
#include <string>
#include "mainMenu.h"   
#include "howToPage.h"
using namespace std;

void showHowToPlay() {
    // a small example maze
    string sample[7] = {
        ". . . # 4 2 7",
        "# # . # 8 # 1",
        "3 5 R 6 9 # 5",
        "0 # # # # # 2",
        "7 1 4 # 3 6 E",
        "2 # 8 5 9 # 0",
        "6 3 1 # 2 4 7"
    };

    string legend[7] = {
        "R    - you",
        "E    - the exit",
        "#    - a wall, you can't walk through it",
        "0-9  - open floor you can walk on",
        ".    - the trail you've already walked",
        "",
        ""
    };

    clearScreen();

    cout << "+=======================================+\n";
    cout << "                                         \n";
    cout << "               HOW TO PLAY               \n";
    cout << "                                         \n";
    cout << "+=======================================+\n";
    
    cout << "\n";
    cout << "  +--------------------------------+\n";
    cout << "  |               GOAL             |\n";
    cout << "  +--------------------------------+\n";
    cout << "\n";

    cout << "    Get from the start (R) to the exit (E)." << endl;
    cout << endl;
    
    cout << "\n";
    cout << "  +--------------------------------+\n";
    cout << "  |             CONTROLS           |\n";
    cout << "  +--------------------------------+\n";
    cout << "\n";

    cout << "    Arrow keys - move up, down, left and right" << endl;
    cout << endl;
    cout << "  -THE MAZE-                                 -EXAMPLE-" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "    " << left << setw(45) << legend[i] << sample[i] << endl;
    }

    cout << endl;
    cout << "  -DIFFICULTIES-" << endl;
    cout << "    Easy   - small maze, few walls" << endl;
    cout << "    Medium - bigger maze, more walls" << endl;
    cout << "    Hard   - largest maze, most walls" << endl;
    cout << endl;
    cout << "  Press Enter to go back..." << endl;

    while (_getch() != 13) {   // 13 = Enter
    }
    clearScreen();
}