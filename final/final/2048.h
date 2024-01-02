#pragma once
#define SIZE 4



void setup_2048();
void printBoard();
void addTile();
void shift(int row[]);
void merge(int row[]);
void moveLeft();
void moveRight();
void moveUp();
void moveDown();
int checkGameOver();
void Input_2048();
void Start_2048();
