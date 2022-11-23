#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏
#include<stdio.h>
#include<string.h>
#include"game.h"
void DisplayBoard(char board[Row][Col], int row, int col)
{

}
void menu()
{
	printf("********************************\n");
	printf("*********  1.play   0.exit******\n");
	printf("********************************\n");
}
void game()
{
	//数组---存放走出的棋盘信息
	char board[Row][Col] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, Row, Col);
	//打印棋盘
	DisplayBoard(board,Row,Col);
}
void test()
{	
	int input = 0;
	do
	{

		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三字棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}