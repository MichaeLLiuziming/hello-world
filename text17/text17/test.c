#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<time.h>
#include<stdlib.h>
//д���룬��д�߲����߼��������⡣
void menu()
{
	printf("**********************************\n");
	printf("******       1.play        *******\n");
	printf("******       0.exit        *******\n");
	printf("**********************************\n");
}

void game()
{
	//�׵���Ϣ�洢
	//1.���ó����׵���Ϣ
	char mine[Rows][Cols] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[Rows][Cols] = { 0 };
	//��ʼ��
	Initboard(mine, Rows, Cols, '0');
	Initboard(show, Rows, Cols, '*');
	//��ӡ����
	//Displayboard(mine, Row, Col);
	Displayboard(show, Row, Col);
	//������
	Setmine(mine, Row, Col);
	Displayboard(mine, Row, Col);
	//ɨ��
	Findmine(mine, show, Row, Col);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

//1.������
//2.�Ų���
//3.