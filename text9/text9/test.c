#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��	
//	//time_t time(time_t *timer)
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	printf("��ʼ��Ϸ\n");
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//			
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ���ȷ�����ǣ�%d\n",ret);
//				break;
//		}
//	}
//}
//
//
//
//void menue()
//{
//	printf("**************************************   \n");
//	printf("*****     1.play       2.exit    *****   \n");
//	printf("**************************************   \n");
//}
//
//int main()
//{
//	int i = 0;
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menue();
//		printf("��ѡ��>��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����,��������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}
#include<string.h>

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ���1�����ڹػ����������������ȡ���ػ�\n������>��");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - ִ��ϵͳ�����
	system("shutdown -s -t 60");
while(1)
{
	printf("��ע�⣬��ĵ���1�����ڹػ����������������ȡ���ػ�\n������>��");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		break;
	}
}
	return 0;
}