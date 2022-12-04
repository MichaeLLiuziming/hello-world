#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//整型按二进制大小端存储
//E为11位时为1023 E为8位时为127
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

int main()
{
	float f = 5.5;
	//5.5
	//101.1
	//(-1)^0*1.011*2^2
	//s=0   m=1.011  e=2
	// 0 10000001   01100000000000000000000

	return 0;
}