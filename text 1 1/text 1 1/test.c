#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//���庯��
//�β�-��ʽ����-��ʽ�ϲ��������������ý������βξ�������
//��ʵ�δ����β�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı��βε�
//��ֵ���ã���ַ����
//����Դ洢�ռ����ֵ�����仯�����ô�ֵ�����Դ洢�ռ�ֵ�����˱仯����ô�ַ
//int is_prime(int t)//��������Int
//{
//	int n = 0;
//	for (n = 2;n < t;n++)
//	{
//		if (t % n == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		//�ж�i�Ƿ�������
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//	int n = 1;
//	for (n = 2;n < i;n++)
//	{
//		if (i % n == 0)
//			break;	
//	}
//	if(n=i-1)
//	printf("%d\n", i);

//int main()
//{
//	int i = 0;
//	int n = 1;
//	int c = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		for (n = 2;n < i;n++)
//		{
//			if (i % n == 0)
//				break;	
//			c++;
//		}
//		if(c==(i-2))
//		printf("%d\n", i);
//		c = 0;
//	}
//	return 0;
//}

////�������治���ж��Ƿ�������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("Ϊ���꣺%d\n", year);
//	}
//	return 0;
//}
int binary_search(int arr[],int k,int sz)//arr��ָ��
{
	int left = 0;
//����,���һ��Ԫ���±�
	int right = sz-1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else 
			return mid;
	}
	return -1;
}

int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��˷����±꣬�Ҳ�������-1
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int z = binary_search(arr, k, sz);//����ȥ������Ԫ�ص�ַ
	if (-1 == z)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±�Ϊ��%d\n", z);
	return 0;
}
//9