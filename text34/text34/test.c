#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int (*pfarr[4])(int, int);//pfarr是一个数组-函数指针的数组
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	//ppfarr是一个数组指针，指针指向的数组有四个元素，指向的数组的每个元素的类型是一个函数指针int(*)(int,int) 
//	return 0;
//}

void print(char* str)
{
	printf("hehe:%s", str);
}

void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");
}

int main()
{
	test(print);
	return 0;
}

//qsort - 可以排序任意类型的数据