#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//À×µÄÊýÄ¿
#define EASY_COUNT 10

void InitBoard(char board[ROW][COL], int row, int col, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void SearchMine(char mine[ROWS][COLS], char show[ROWS][COLS], int i, int j);
