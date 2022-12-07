#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//} 

//int main()
//{
//	const char arr1[] = "abcdef";
//	const char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n"); 
//	}
//	return 0;
//}

//int main()
//{
//	const char arr1[] = "abcdef";
//	const char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//		printf("%p\n",arr1);
//		printf("%p\n", arr2);
//		printf("%p\n",p1);
//		printf("%p\n",p2);
//	return 0;
//}
//指针数组用来存放指针的数组
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	int* arr1[10];
//	char* arr2[10];
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr3[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d", *(arr3[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 5;j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");

	}
	return 0;
}