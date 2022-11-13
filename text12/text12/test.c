#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
// void add_one(int* num)
//{
//	(*num)++;
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int n = 5;
//	for(n=5;n>0;n--)
//	{
//		add_one(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
////链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321，跟输出函数有关系
//	return 0;
//}

//函数声明
//int Add(int, int);
#include "add.h"
int main()
{

	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}