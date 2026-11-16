#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "mainMenu.h"
#include "easyMaze.h"
using namespace std;

void generateMaze(int N, char maze[N][N]) {
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

void drawMaze(int N, char maze[N][N]) {
    clearScreen();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << maze[i][j] << ' ';
        }
        cout << endl;
    }

}