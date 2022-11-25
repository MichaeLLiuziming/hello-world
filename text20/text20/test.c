#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//指针里面存的是地址，是个变量
//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	//printf("%d\n", pa);
//	//printf("%d\n", pc);
//	return 0;
//}

//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p；*p能够访问4个字节
//char* p; *p能够访问1个字节
//double* p；*p能够访问8个字节
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d\n", pa);
//	printf("%d\n", pa + 1);
//	printf("%d\n", pc);
//	printf("%d\n", pc + 1);
//	return 0;
//}

//指针类型决定了；指针走一步走多远（指针的步长）
//int* p;p+1-->4
//char* p;p+1-->1
//double* p;p+1-->8

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名---首元素的地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针：就是指针指向的位置不可知，如未初始化的指针
//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值,野指针
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 12;i++)//指针越界
//	{
//		p++;
//	}
//	return 0;
//}

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	//指针所指向空间释放
	return 0;
}