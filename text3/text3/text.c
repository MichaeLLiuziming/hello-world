#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//�ַ����Ľ�����־����\0��
//	//"abcdef"
//	//'\0'--ת���ַ�--0
//	//0->����0
//	//'0'->48
//	//'a','b','0'
//	//EOF - end of file - �ļ�������־ - 1
//	return 0;
//}
//
//int main()
//{
//	float a = 0, b = 0, c = 0;
//	scanf("%f%f", &a, &b);
//	if (a > b)
//		c = a;
//	else
//		c = b;
//	printf("%f\n",c);
//	return 0;
//}
//
//float Max(float x, float y)
//{
//	float c;
//	if (x > y)
//		c = x;
//	else
//		c = y;
//	return c;
//}
//
//int main()
//{
//	float a, b, c;
//	scanf("%f%f", &a, &b);
//	c = Max(a, b);
//	printf("%f\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//��2����λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 ����
//	//11111111111111111111111111111110 ����
//	//10000000000000000000000000000001 ԭ��
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���,��λ��&
//	int a = 3, b = 15;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 190, b = 20, c;
//	c = (a > b ? --a : b++);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0 };
//	arr[2] = 4;
//	printf("arr[2] = %d\n", arr[2]);
//	return 0;
//}

//int main()
//{
//	//typedef - ���Ͷ��� - �����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 50;
//	printf("%d\n", num2);
//
//	return 0;
//}

//static���ξֲ��������ֲ��������������ڱ䳤
//static����ȫ�ֱ���,�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ��
////static ���κ���,Ҳ�Ǹı��˺�����������---��׼ȷ
//static���κ������ı��˺�������������
//�ⲿ��������----��������ڲ���������
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

#define MAX 100;
//#define�����Զ����--������
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

////��Ķ��巽ʽ
//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//	//int a = MAX;
//	int a = 10, b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 's';
	printf("pc = %c\n", ch);
}
//int main()
//{
//	int a = 10;
//	//&a;
//	int* p = &a;
//	//��һ�ֱ�����������ŵ�ַ��---ָ�����
//	printf("&a = %p\n", &a);
//	printf("&a = %p\n", p);
//	*p=20;//�����ò�����
//	printf("&a = %d\n", a);
//	return 0;
//}