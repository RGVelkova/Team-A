#include <cstdlib>
#include <ctime>
#include <string>
#include <conio.h>
#include "mainMenu.h"   
#include "generateMaze.h"
using namespace std;

char maze[MAX_N][MAX_N];
int mazeSize;

void generateMaze(int difficulty) {
    srand(time(0));

    int sizes[] = { 10, 20, 25 };        // easy, medium, hard
    int wallChances[] = { 6, 4, 3 };     // 1 in N cells is a wall

    mazeSize = sizes[difficulty - 1];
    int wallChance = wallChances[difficulty - 1];

    for (int i = 0; i < mazeSize; i++) {
        for (int j = 0; j < mazeSize; j++) {
            if (rand() % wallChance == 0) {
                maze[i][j] = '#';
            }
            else {
                maze[i][j] = '0' + rand() % 10;
            }
        }
    }

    // maing sure an open route always exists by keeping the top row and right column open
    for (int i = 0; i < mazeSize; i++) {
        if (maze[0][i] == '#') {
            maze[0][i] = '0';
        }
        if (maze[i][mazeSize - 1] == '#') {
            maze[i][mazeSize - 1] = '0';
        }
    }

    maze[0][0] = 'R';
    maze[mazeSize - 1][mazeSize - 1] = 'E';
}

void drawMaze() {
    clearScreen();

    for (int i = 0; i < mazeSize; i++) {
        for (int j = 0; j < mazeSize; j++) {
            cout << maze[i][j] << ' ';
        }
        cout << endl;
    }
}

void showWinScreen(int difficulty, int moves) {
    string names[] = { "Easy", "Medium", "Hard" };

    clearScreen();
    cout << endl;
    
    cout << "=======================================\n";
    cout << "                                         \n";
    cout << "          YOU ESCAPED THE MAZE!          \n";
    cout << "                                         \n";
    cout << "=======================================\n";
    
    cout << endl;
    cout << "  Difficulty: " << names[difficulty - 1] << endl;
    cout << "  Moves:      " << moves << endl;
    cout << endl;
    cout << "  Press Enter to go back.." << endl;

    while (_getch() != 13) {   // 13 = Enter
    }
    clearScreen();

}

void playMaze(int difficulty) {
    int row = 0, col = 0;
    int moves = 0;

    generateMaze(difficulty);
    drawMaze();

    while (true) {
        int key = _getch();

        if (key == 224) {   // arrow keys send 224 first
            key = _getch();

            int newRow = row;
            int newCol = col;

            switch (key) {
            case 72: newRow--; break;   // up
            case 80: newRow++; break;   // down
            case 75: newCol--; break;   // left
            case 77: newCol++; break;   // right
            }

            if (newRow >= 0 && newRow < mazeSize && newCol >= 0 && newCol < mazeSize && maze[newRow][newCol] != '#') {

                bool win = (maze[newRow][newCol] == 'E');

                maze[row][col] = '.';
                row = newRow;
                col = newCol;
                moves++;

                if (win) {
                    showWinScreen(difficulty, moves);
                    break;
                }

                maze[row][col] = 'R';
                drawMaze();
            }
        }
    }
}