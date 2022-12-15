#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//定义函数
//形参-形式参数-形式上参数，当函数调用结束后，形参就销毁了
//当实参传给形参时候，形参其实是实参的一份临时拷贝
//对形参的修改是不会改变形参的
//传值调用，传址调用
//不会对存储空间里的值产生变化，采用传值，若对存储空间值产生了变化则采用传址
//int is_prime(int t)//返回整型Int
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
//		//判断i是否是素数
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

////函数里面不用判断是否是闰年
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
//			printf("为闰年：%d\n", year);
//	}
//	return 0;
//}
int binary_search(int arr[],int k,int sz)//arr是指针
{
	int left = 0;
//个数,最后一个元素下标
	int right = sz-1;

	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素的下标
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
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到了返回下标，找不到返回-1
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int z = binary_search(arr, k, sz);//传过去的是首元素地址
	if (-1 == z)
		printf("找不到\n");
	else
		printf("找到了，下标为：%d\n", z);
	return 0;
}
//9