#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>
#include<string.h>
//����
void InitBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		//1.��ӡһ�е�����
		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
		//2.��ӡ�ָ���
		printf("---|---|---\n");
	}
}