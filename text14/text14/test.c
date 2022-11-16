#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}

//int Fac(int n)
//{
//	if (n > 1)
//		return n * Fac(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	sum = Fac(n);
//	printf("%d\n", sum);
//	return 0;
//}

//斐波拉契数列
//1 1 2 3 5 8 13 21 34 55
//int Fac(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fac(n-1) + Fac(n-2);
//}
//50
//49 48
//48 47 47 46

int Fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int f = 0;
	scanf("%d",&n);
	//测试驱动开发
	f = Fac(n);
	printf("f = %d\n", f);
	return 0;
}