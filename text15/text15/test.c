#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//��������----�������----10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = {'a',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7   sizeof����arr4��ռ�ռ��С��arr4���߸�Ԫ��---char 7*1=7
//	printf("%d\n", strlen(arr4));//6   strlen�����ַ����ĳ���-----��\0��֮ǰ���ַ�����
//	int n = 5;
//	//char ch[n];//ERROR��Ӧ�ƶ��������ʽ�����鴴����[]��Ҫ����һ�������ſ��ԣ�����ʹ�ñ�����
//	return 0;
//}

//1. strlen��sizeofû��ʲô����
//2.strlen�����ַ������ȵ�----ֻ����ַ����󳤶�
//3.sizeof������������飬���͵Ĵ�С--��λ���ֽ�--������
//


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));//a b c
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0;i < len;i++)
//	//{
//	//	printf("% c\n", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("% d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//}
//
////�������ڴ�����������ŵ�

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int n = 0;
//	//char ch[5][6];
//	//int arr2[] = { 1,2,3,4 };//��ά���飬��������ʡ�ԣ���������ʡ��
//	for (i = 0;i < 3;i++)
//	{
//		for (n = 0;n < 4;n++)
//		{
//			printf("&arr[%d][%d] = %p ",i,n, &arr[i][n]);
//		}
//		printf("\n");
//	}
//	return 0;
//}//��ά���������洢


////ð�����򣬽�һ�������Ŵ�С������ѭ����һ���ж�
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������,9��ð������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		//ÿ��ð�����������
//		for (j = 0;j <sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 9,1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//
//	int i = 0;
//	//��arr���������ų�����
//	bubble_sort(arr,sz);//ð��������,10������Ҫ9��ð������
//    for (i = 0;i < sz;i++)
//	{
//		printf("arr[%d] = %d\n",i,arr[i]);
//	}
//	return 0;
//}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    printf("%p\n", arr);//������Ԫ�ص�ַ
    printf("%p\n", arr+1);//����ĵڶ���Ԫ�ص�ַ
    printf("%p\n", &arr[0]);//������Ԫ�ص�ַ
    printf("%p\n", &arr[0]+1);//����ĵڶ���Ԫ�ص�ַ
    printf("%p\n", &arr);//&arr---����ĵ�ַ��ֻ�Ǵӵ�һ��Ԫ�صĵ�ַ��ʼ
    printf("%p\n", &arr+1);
    return 0;
}
//�����������׵�ַ����������
//1.sizeof(������)----��������ʾ�������飬sizeof(�����������������������Ĵ�С����λ���ֽ�
//2.&�������������������������飬&��������ȡ��������������ĵ�ַ