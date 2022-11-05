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
//			printf("最大值为：%d\n", a);
//			if (b > c)
//				printf("%d,%d,%d\n", a, b, c);
//			else
//				printf("%d,%d,%d\n", a, c, b);
//		}
//
//		else
//		{ 
//			printf("最大值为：%d\n", c);
//			printf("%d,%d,%d\n", c, a, b);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("最大值：%d\n", b);
//			if (a > c)
//				printf("%d,%d,%d\n", b, a, c);
//			else
//				printf("%d,%d,%d\n", b, c, a);
//		}
//		else
//		{
//			printf("最大值：%d\n", c);
//			printf("%d,%d,%d\n", c, b, a);
//		}
//	}
//	return 0;
//	//用static修饰的局部变量的初始化，只在第一次进入时进行，之后保持上一次离开时的值，静态变量只初始化一次。
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
//	//用static修饰的局部变量的初始化，只在第一次进入时进行，之后保持上一次离开时的值，静态变量只初始化一次。
//}

//打印出所有3的倍数
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

////求最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int a = 0, b = 0, k = 0;
//	scanf("%d%d", &m, &n);
//	if (m % n == 0)
//		printf("最大公约数：%d\n", n);
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
//				printf("最大公约数：%d\n", a); 
//			    break;
//			}
//			else
//			{
//				b = a;
//				a = n % a;
//				n = b;
//				if (n % a == 0)
//				{
//				printf("最大公约数：%d\n", a);
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

//打印闰年
//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("闰年：%d  ", year);
//			i++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("闰年：%d  ", year);
//			i++;
//		}
//	}
//	printf("\n共有闰年%d次\n", i);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int i = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
//		{
//			printf("闰年：%d  ", year);
//			i++;
//		}
//	}
//	printf("\n共有闰年%d次\n", i);
//	return 0;
//}

//打印素数

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
			printf("素数：%d\n", i);
		count = 0;
	}
	return 0;
}