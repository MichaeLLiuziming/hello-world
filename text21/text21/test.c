#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ��������Ĭ�ϵ���һ�����ֵ
//	/**p = 20;*/
//	return 0;
//}
//����ָ���ָ��Խ����
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0;i <= 12;i++)
//	{
//		(*p) = i;
//		p++;
//	}
//	return 0;
//}

//test()
//{
//	//int a = 10;
//	int arr[10] = { 0 };
//	return arr;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//
//	return 0;
//}

//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//��֪����ʼֵ��ֵΪɶ���ͳ�ʼֵΪ��ָ��NULL--������ʼ��
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL; 
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int c = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	//for (i = 0;i < c;i++)
//	//{
//	//	printf("%d\n", *p);
//	//	p++;
//	//}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d\n", *p);
//		p -= 2;
//	}
//	return 0;
//}

//my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "biter";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//1.ȡ��ַ&arr---&������������Ԫ�صĵ�ַ--��������ʾ��������---&������ ȡ��������������ĵ�ַ
//	//sizeof(arr)---sizeof(��������---��������ʾ��������---sizeof(�����������������������Ĵ�С
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%p========%p\n", p + i, &arr[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	int*** pppa = &ppa;
//	***pppa = 20;
//	printf("%d\n", ***pppa);
//	return 0;
//}

//ָ������-����--���ָ�������
//����ָ��-ָ��
int main()
{

	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//��������-�������
	//�ַ�����-����ַ�
	//ָ������-���ָ��
	int* arr[3] = { pa,pb,pc };
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%d\n", *(arr[i]));
	}
		return 0;
}