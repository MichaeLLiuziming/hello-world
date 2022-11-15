#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//递归常见错误，栈溢出
//int main()
//{
//	main();
//	return 0;
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	int a = num % 10;
//	int b = num / 10 % 10;
//	int c = num / 100 % 10;
//	int d = num / 1000 % 10;
//	printf("%d%d%d%d\n", a, b, c, d);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//
//	}
//		printf("%d ", n%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
//把大事化小事
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen(" ");
//1+1+1+0
//3
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n", len);
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	printf("%d\n", len);
	return 0;
}