#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "mainMenu.h"   // clearScreen()
#include "generateMaze.h"
using namespace std;

char maze[MAX_N][MAX_N];
int mazeSize;

void generateMaze(int difficulty) {
	srand(time(0));

	int sizes[] = { 10, 20, 25 };   // easy, medium, hard
	int wallChances[] = { 6,  4,  3 };   // 1 in N cells is a wall

	mazeSize = sizes[difficulty - 1];
	int wallChance = wallChances[difficulty - 1];

	for (int i = 0; i < mazeSize; i++) {
		for (int j = 0; j < mazeSize; j++){
			maze[i][j] = (rand() % wallChance == 0) ? '#' : '0' + rand() % 10;
		}		
	}

	// make sure an open path always exists
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
		for (int j = 0; j < mazeSize; j++){
			cout << maze[i][j] << ' ';
		}
		cout << endl;
	}
}

void playMaze(int difficulty) {
	int row = 0, col = 0;
	generateMaze(difficulty);
	drawMaze();

	while (true) {
		if (_getch() != 224) {
			continue;
		}

		int newRow = row, newCol = col;
		switch (_getch()) {
		case 72: newRow--; break;  // up
		case 80: newRow++; break;  // down
		case 75: newCol--; break;  // left
		case 77: newCol++; break;  // right
		}

		if (newRow < 0 || newRow >= mazeSize || newCol < 0 || newCol >= mazeSize || maze[newRow][newCol] == '#'){
			continue;
		}	

		bool win = (maze[newRow][newCol] == 'E');
		maze[row][col] = '.';
		row = newRow;
		col = newCol;

		if (win) { clearScreen(); return; }

		maze[row][col] = 'R';
		drawMaze();
	}
}