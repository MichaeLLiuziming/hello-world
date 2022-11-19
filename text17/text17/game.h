#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2

void Initboard(char board[Rows][Cols], int rows,int  cols,char set);
void Displayboard(char board[Rows][Cols], int row, int  col);