#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//;//�����--1�����
//	int age = 11;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����");
//	}
//	else if (age < 28 && age >= 18)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("��׳��\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��");
//	else
//		printf("����");
//	//if (age < 19)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//		if (a == 1)
//			{
//				if (b == 2)
//				printf("hehe\n");
//			}
//		else
//			printf("haha\n");
//	return 0;
//}
//else���������elseƥ��

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//float a = (num % 2);
//	if ((num % 2) !=0)
//	{ 
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//		
//	//if (num = 5)//һ���Ⱥ��Ǹ�ֵ
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}
//
//int main()
//{
//	int i=1;
//	while (i <= 100 && i > 0)
//	{
//		if (i % 2 != 0)
//			printf("������%d\n",i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 3;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("����һ\n"); break;
//	case 2:
//		printf("���ڶ�\n"); break;
//	case 3:
//		printf("������\n"); break;
//	case 4:
//		printf("������\n"); break;
//	case 5:
//		printf("������\n"); break;
//	case 6:
//		printf("������\n"); break;
//	case 7:
//		printf("������\n"); break;
//	default:
//		printf("�������\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 3;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n"); break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n"); break;
//	default:
//		printf("�������\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//		continue;//��ֹ����ѭ���������䣬��ִ�к���Ĵ��롣������ӡ����5
//		printf("%d\n",i);
//	}		
//	return 0;
//}
//	

int main()
{
	int ch = 0;
	//ctrl+z
	//EOF----end of file ---- -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}