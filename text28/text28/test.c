#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100--ԭ��
//	//11111111111111111111111111101011--����
//	//11111111111111111111111111101100--����
//	unsigned int j = 10;
//	//00000000000000000000000000001010--ԭ��
//	//00000000000000000000000000001010--����
//	//11111111111111111111111111101100
//	//11111111111111111111111111110110--����
//	//11111111111111111111111111110101--����
//	//10000000000000000000000000001010--ԭ��
//	printf("%d\n", i + j);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = 128;//127+1---128
//	//û��128���������127
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
//		a[i] = -1 - i;//-128  1����01���൱��\0
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
//�޷������ر����׵�����ѭ��

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
	int n = 9;//4�ֽ�
	float* pFloat = (float*)&n;//int*
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}
//9  9.0  9  9.0