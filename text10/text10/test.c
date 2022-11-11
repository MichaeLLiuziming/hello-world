#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("z=%d\n", sum);
//	//C语言提供给大家的库函数
//	return 0;
//}


//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen---string  length---字符串长度相关
//	//srtcpy---string  copy -------字符串拷贝
//	return 0;
//}

//memset
//memory ------内存   set ----设置
//
#include <string.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'3', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}

int get_max(int x, int y)
{
	int z = 0;
	return (x > y) ? (x) : (y);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int Max = get_max(a, b);
	printf("Max=%d\n", Max);
	return 0;
}

