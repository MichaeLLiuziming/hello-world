#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ
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
	//����---����߳���������Ϣ
	char board[Row][Col] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, Row, Col);
	//��ӡ����
	DisplayBoard(board,Row,Col);
}
void test()
{	
	int input = 0;
	do
	{

		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}