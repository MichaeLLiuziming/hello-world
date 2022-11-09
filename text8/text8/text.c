#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//		printf("%d\n", a);
//
//		return 0;
//	
//}
//Êý¾Å
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 10 == 9)
//			n++;
//		if (i/10 == 9)
//			n++;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int i = 0,flag = 1;
//	float n = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		n = 1.0/ i;
//		flag = -flag;
//		sum = sum - flag * n;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = 0, i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0,n = 0,sum = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			if (n != i)
//			{
//				sum = n * i;
//				printf("%d*%d=%d ", i, n, sum);
//			}
//			else
//			{
//				sum = n * i;
//				printf("%d*%d=%d\n ", i, n, sum);
//			}
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0, n = 0, sum = 0;
	for (i = 1; i <= 9; i++)
	{
		for (n = 1; n <= i; n++)
		{
				sum = n * i;
				printf("%d*%d=%-2d ", i, n, sum);
		}
		printf("\n");
	}
	return 0;
}
