#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//定义函数
//形参-形式参数-形式上参数，当函数调用结束后，形参就销毁了
//当实参传给形参时候，形参其实是实参的一份临时拷贝
//对形参的修改是不会改变形参的
//传值调用，传址调用
//不会对存储空间里的值产生变化，采用传值，若对存储空间值产生了变化则采用传址
int is_prime(int t)//返回整型Int
{
	int n = 0;
	for (n = 2;n < t;n++)
	{
		if (t % n == 0)
		{
			return 0;
		}
	}
		return 1;
}

int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++);
		{
		     //判断i是否是素数
			if (is_prime(i) == 1)
			printf("%d\n", i);
		}
	return 0;
}
	//	int n = 1;
	//	for (n = 2;n < i;n++)
	//	{
	//		if (i % n == 0)
	//			break;	
	//	}
	//	if(n=i-1)
	//	printf("%d\n", i);