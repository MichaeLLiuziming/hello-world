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
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pfarr[4])(int, int);//pfarr��һ������-����ָ�������
//	int (*(*ppfarr)[4])(int, int) = &pfarr;
//	//ppfarr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ�أ�ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int) 
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

//qsort - ���������������͵�����