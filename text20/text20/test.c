#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ���������ǵ�ַ���Ǹ�����
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

//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p��*p�ܹ�����4���ֽ�
//char* p; *p�ܹ�����1���ֽ�
//double* p��*p�ܹ�����8���ֽ�
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

//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//int* p;p+1-->4
//char* p;p+1-->1
//double* p;p+1-->8

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//������---��Ԫ�صĵ�ַ
//	char* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//Ұָ�룺����ָ��ָ���λ�ò���֪����δ��ʼ����ָ��
//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ,Ұָ��
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 12;i++)//ָ��Խ��
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
	//ָ����ָ��ռ��ͷ�
	return 0;
}