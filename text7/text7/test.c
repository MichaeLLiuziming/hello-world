#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0; 
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("���ֵΪ��%d\n", a);
//			if (b > c)
//				printf("%d,%d,%d\n", a, b, c);
//			else
//				printf("%d,%d,%d\n", a, c, b);
//		}
//
//		else
//		{ 
//			printf("���ֵΪ��%d\n", c);
//			printf("%d,%d,%d\n", c, a, b);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("���ֵ��%d\n", b);
//			if (a > c)
//				printf("%d,%d,%d\n", b, a, c);
//			else
//				printf("%d,%d,%d\n", b, c, a);
//		}
//		else
//		{
//			printf("���ֵ��%d\n", c);
//			printf("%d,%d,%d\n", c, b, a);
//		}
//	}
//	return 0;
//	//��static���εľֲ������ĳ�ʼ����ֻ�ڵ�һ�ν���ʱ���У�֮�󱣳���һ���뿪ʱ��ֵ����̬����ֻ��ʼ��һ�Ρ�
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int m = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{ 
//		m = a;
//		a = b;
//		b = m;
//	}
//	if (a < c)
//	{
//		m = a; 
//		a = c;
//		c = m;
//	}
//	if (b < c)
//	{
//		m = b;
//		b = c;
//		c = m;
//	}
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//	//��static���εľֲ������ĳ�ʼ����ֻ�ڵ�һ�ν���ʱ���У�֮�󱣳���һ���뿪ʱ��ֵ����̬����ֻ��ʼ��һ�Ρ�
//}

//��ӡ������3�ı���
//int main()
//{
//	int i = 1;
//	int b = 1;
//	while (b>0)
//	{
//		b = i * 3;
//		if (b < 100)
//			printf("%d\n", b);
//		else
//			break;
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
// 

////�����Լ��
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int a = 0, b = 0, k = 0;
//	scanf("%d%d", &m, &n);
//	if (m % n == 0)
//		printf("���Լ����%d\n", n);
//	else
//	{ 
//		while(1)
//		{
//			if(k)
//			{
//			b = a;
//			a = n % a;
//			n = b;
//			}
//			a = m % n;
//			if(n % a==0)
//			{
//				printf("���Լ����%d\n", a); 
//			    break;
//			}
//			else
//			{
//				b = a;
//				a = n % a;
//				n = b;
//				if (n % a == 0)
//				{
//				printf("���Լ����%d\n", a);
//				break;
//				}
//				k++;
//			} 
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��ӡ����
//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("���꣺%d  ", year);
//			i++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("���꣺%d  ", year);
//			i++;
//		}
//	}
//	printf("\n��������%d��\n", i);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("���꣺%d  ", year);
//			i++;
//		}
//	}
//	printf("\n��������%d��\n", i);
//	return 0;
//}

//��ӡ����

int main()
{
	int s = 0;
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for(s=2;s<i;s++)
		{ 
			count++;
			if (i % s == 0)
				break;
		}
		if (count == (i - 2))
			printf("������%d\n", i);
		count = 0;
	}
	return 0;
}