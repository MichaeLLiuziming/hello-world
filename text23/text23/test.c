#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int count_bit_one(unsigned int n)
//{
//	int count =0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}//计算1的个数.
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	int count = count_bit_one(a);
//	//13 
//	//00000000000000000000000000001101
//	//
//	printf("count = %d\n", count);
//	//system("pause");//system库函数--执行系统命令--pause（暂停）
//	return 0;
//}

//int get_diff_bit(int m,int n)
//{
//	int tmp = m ^ n;
//	int count = count_bit_one(tmp);
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ",((m >> i) & 1));
//	}
//	printf("\n");
//
//	printf("偶数位：\n");
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ", ((m >> i) & 1));
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1;j < i;j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//void reverse_string(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 2;
//	//int right = strlen(arr) - 1;
//	//printf("%d\n", strlen(arr) - 1);
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	//printf("%d\n", sz-1);
//	printf("%s\n", arr);
//	return 0;
//}

//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}

//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return Digitsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

double  pow(int n,int k)
{
	if (k < 0)
		return (1.0 / (pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n * pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n,&k);
	double ret = pow(n,k);
	printf("ret = %lf\n", ret);
	return 0;
}