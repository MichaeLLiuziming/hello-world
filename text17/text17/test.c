#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<time.h>
#include<stdlib.h>
//写代码，边写边测试逻辑有无问题。
void menu()
{
	printf("**********************************\n");
	printf("******       1.play        *******\n");
	printf("******       0.exit        *******\n");
	printf("**********************************\n");
}

void game()
{
	//雷的信息存储
	//1.布置出的雷的信息
	char mine[Rows][Cols] = { 0 };
	//2.排查出的雷的信息
	char show[Rows][Cols] = { 0 };
	//初始化
	Initboard(mine, Rows, Cols, '0');
	Initboard(show, Rows, Cols, '*');
	//打印棋盘
	//Displayboard(mine, Row, Col);
	Displayboard(show, Row, Col);
	//布置雷
	Setmine(mine, Row, Col);
	Displayboard(mine, Row, Col);
	//扫雷
	Findmine(mine, show, Row, Col);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

//1.布置雷
//2.排查雷
//3.