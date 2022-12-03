#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100--原码
//	//11111111111111111111111111101011--反码
//	//11111111111111111111111111101100--补码
//	unsigned int j = 10;
//	//00000000000000000000000000001010--原码
//	//00000000000000000000000000001010--补码
//	//11111111111111111111111111101100
//	//11111111111111111111111111110110--补码
//	//11111111111111111111111111110101--反码
//	//10000000000000000000000000001010--原码
//	printf("%d\n", i + j);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128;//127+1---128
//	//没有128，正数最大127
//	//11111111111111111111111111111111
//	//00000000000000000000000011111111
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-128  1遇到01就相当于\0
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;//0-255
//int main()
//{
//	for (i = 0;i <= 255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//无符号数特别容易导致死循环

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//char -128--127  0--256
//limits
//

int main()
{
	int n = 9;//4字节
	float* pFloat = (float*)&n;//int*
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}
//9  9.0  9  9.0