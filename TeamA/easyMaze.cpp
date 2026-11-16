#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "mainMenu.h"
#include "easyMaze.h"
using namespace std;

const int N = 10;
char maze[N][N];
int playerRow = 0, playerCol = 0;

void generateMaze() {
    srand(time(0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (rand() % 4 == 0)
                maze[i][j] = '#';
            else
                maze[i][j] = '0' + rand() % 10;
        }
    }

    maze[0][0] = 'R';
    maze[N - 1][N - 1] = 'E';
}

void drawMaze() {
	clearScreen();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << maze[i][j] << ' ';
        }
        cout << endl;
    }

}

void easyMaze() {
	generateMaze(); 
    drawMaze();

    while (true) {
        int key = _getch();

        if (key == 224) {
            key = _getch();

            int newRow = playerRow;
            int newCol = playerCol;

            switch (key) {
            case 72: newRow--; break; // Up
            case 80: newRow++; break; // Down
            case 75: newCol--; break; // Left
            case 77: newCol++; break; // Right
            }

            if (newRow >= 0 && newRow < N && newCol >= 0 && newCol < N && maze[newRow][newCol] != '#') {

                bool win = (maze[newRow][newCol] == 'E');

                maze[playerRow][playerCol] = '.';

                playerRow = newRow;
                playerCol = newCol;

                if (win) {
					clearScreen();
                    break;
                }

                maze[playerRow][playerCol] = 'R';
                drawMaze();
            }
        }
    }
}