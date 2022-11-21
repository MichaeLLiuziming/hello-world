#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define Row 9
#define Col 9
#define Rows Row+2
#define Cols Col+2
#define EASY_COUNT 80

void Initboard(char board[Rows][Cols], int rows,int  cols,char set);
void Displayboard(char board[Rows][Cols], int row, int  col);
void Setmine(char board[Rows][Cols], int row, int  col);
void Findmine(char mine[Rows][Cols],char show[Rows][Cols],int row,int col);