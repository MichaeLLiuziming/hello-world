#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int float
// �ַ�
//int main()
//{
//	int sum;
//	int a, b;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//1    --       3,3.14ֱ��д������ֵ�������泣����
//2    --       printf("%d\n", num);��ֵ������const-�����ԣ�const���εĳ�����
//int main()
//{
//	const int n = 10;//n�Ǳ��������г����ԣ������ǳ�����
//	int arr[n] = { 0 };
//	//const int num = 4;
//	//printf("%d\n", num);
//	////int num = 8;
//	////printf("%d\n", num);
//	return 0;
//}
// 3     --     #define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("MAX = %d", MAX);
//	return 0;
//}

//4      ---     ö�ٳ���
//ö��----һһ�о�
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//���ڣ�1��2��3��4��5��6��7
//ö�ٹؼ��֣�enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET--ö�ٳ���
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//	color = RED;
//	printf("%d\n", color);
//	return 0;
//}

//�ַ���+ת���ַ�+ע��
//�ַ�����"asdf"
//������˫������������һ���ַ���Ϊ�ַ�������ֵ�����߼���ַ�����ע���ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������"hello bit.\n"
//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
//	// a--97,A--65
//	//char arr[] = "abc";//����
//	////"abc"-----'a','b','c','\0'----'\0'�ַ����Ľ�����־����������
//	//char arr1[] = { 'a','b','c' ,'\0'};
//	////'a','b','c'
//	//printf("%s\n", arr);
//	//printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//a b c \0
//	char arr2[] = { 'a','b','c' };//a b c x x x x x.....\0
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//ת���ַ���ת��ԭ������˼
//
//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("c:\t");//\t-ˮƽ�Ʊ��
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\'');
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));//\32-----32�������˽������֣�32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ���
//	printf("%c\n", '\x61');
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
 //whileѭ��
//int main()
//{
//	int i = 0;
//	printf("�������\n");
//		while(i<=2000)
//		{
//			printf("��һ�д���:%d\n",i);
//			i++;
//		}
//		if (i >= 2000)
//		{
//		printf("��offer");
//		}
//
//	return 0;
//}

////����:�⺯��+�Զ��庯��
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = 0;
//	int num1 = 50;
//	int num2 = 20;
//	sum = a + b;
//	sum =Add(num1,num2);
//	printf("Sum = %d", sum);
//	return 0;
//}
//
////����:һ����ͬ����Ԫ�صļ���
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//��λ��2����λ��������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b = a << 1;
//	int c = b << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//
////���������
//int main()
//{
//	//��2����λ��λ����
//	//&��λ�룬|��λ��^��λ���
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//011  011 011
//	//101  101 101
//	//001  111 110
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	a = 10;
//	a += a;
//	printf("%d\n", a);
//	return 0;
//}
//
////��Ŀ������!-��˫�������+-*/����Ŀ������
////C���������Ǳ�ʾ��٣�0�٣�1���棻
//int main()
//{
//	int a = 10, b = 20,c;
//	c = a + b;
//	printf("%d\n", !c);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };//10������Ԫ�ص�����
	int sz = 0;
	printf("%d\n", sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);
	//���������Ԫ�ظ���
	// ���� = �����ܴ�С/ÿ��Ԫ�ش�С
	//int a = 10;
	////������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);
	return 0;
}