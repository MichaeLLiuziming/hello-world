#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Initboard(char board[Rows][Cols], int rows, int  cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;//'*'
		}
	}
}

void Displayboard(char board[Rows][Cols], int row, int  col)
{
	int i = 0;
	int j = 0;
	//´òÓ¡ÁÐºÅ
	for (i = 1;i <= col-1;i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1;i < row;i++)
	{
		for (j = 1;j < col;j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}