#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100;i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//F5--启动调试--和F9配合使用

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

//断电 F9切换断电
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100;i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0;i < 100;i++)
//	{
//		printf("%d ", 10 - i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		int j = 0;
		for (j = 1;j <= i;j++)
		{
			ret *= j;
		}
	    sum += ret;
		ret = 1;
	}
	printf("%d\n", sum);
	return 0;
}