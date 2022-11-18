#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏
#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("*********  1.play   0.exit******\n");
	printf("********************************\n");
}
void game()
{
	char ret = 0;
	//数组---存放走出的棋盘信息
	char board[Row][Col] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, Row, Col);
	//打印棋盘
	DisplayBoard(board, Row, Col);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断玩家是否赢
		 ret = Iswin(board, Row, Col);
		 if (ret != 'C')
		 {
			 break;
		 }
		//电脑下棋
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断电脑是否赢
		ret = Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
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