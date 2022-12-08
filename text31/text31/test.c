#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int* p = NULL;//整型指针-指向整型的指针--可以存放整型的地址
//	char* pc = NULL;//字符指针-指向字符的指针--可以存放字符的地址
//	//数组指针--指向数组的指针--存放数组的地址
//	int arr[10] = { 0 };
//	//arr首元素地址
//	//&arr[0]-首元素地址
//	//&arr--数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址存起来
//	//上面的p就是数组指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	int(*p)[10] = &arr;
//	int i = 0;
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *((*p)+i));
//	}
//
//	return 0; 
//}

void print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0;i < x;i++)
	{
		int j = 0;
			for (j = 0;j < y;j++)
			{
				printf("%d ", *(*(p + i) + j));
			}
			printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}

//指针数组，数组指针