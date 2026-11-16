#pragma once
#include <iostream>

const int MAX_N = 25;

extern char maze[MAX_N][MAX_N];
extern int mazeSize;

void generateMaze(int difficulty);   // 1 = easy, 2 = medium, 3 = hard
void drawMaze();
void playMaze(int difficulty);     // shared game loop
	