#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int* p = NULL;//����ָ��-ָ�����͵�ָ��--���Դ�����͵ĵ�ַ
//	char* pc = NULL;//�ַ�ָ��-ָ���ַ���ָ��--���Դ���ַ��ĵ�ַ
//	//����ָ��--ָ�������ָ��--�������ĵ�ַ
//	int arr[10] = { 0 };
//	//arr��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr--����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַ������
//	//�����p��������ָ��
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	int(*p)[10] = &arr;
//	int i = 0;
//	//for (i = 0;i < 10;i++)
//	//{
//	//	printf("%d ", (*p)[i]);
//	//}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", *((*p)+i));
//	}
//
//	return 0; 
//}

void print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0;i < x;i++)
	{
		int j = 0;
			for (j = 0;j < y;j++)
			{
				printf("%d ", *(*(p + i) + j));
			}
			printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
	return 0;
}

//ָ�����飬����ָ��