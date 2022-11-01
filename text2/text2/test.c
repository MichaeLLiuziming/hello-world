#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int float
// 字符
//int main()
//{
//	int sum;
//	int a, b;
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//1    --       3,3.14直接写出来的值就是字面常量。
//2    --       printf("%d\n", num);常值变量，const-常属性，const修饰的常变量
//int main()
//{
//	const int n = 10;//n是变量，具有常属性，本质是常量。
//	int arr[n] = { 0 };
//	//const int num = 4;
//	//printf("%d\n", num);
//	////int num = 8;
//	////printf("%d\n", num);
//	return 0;
//}
// 3     --     #define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("MAX = %d", MAX);
//	return 0;
//}

//4      ---     枚举常量
//枚举----一一列举
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1、2、3、4、5、6、7
//枚举关键字：enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET--枚举常量
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

//字符串+转义字符+注释
//字符串，"asdf"
//这种由双引号引起来的一串字符称为字符串字面值，或者简称字符串，注意字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，不算作字符串内容"hello bit.\n"
//int main()
//{
//	//数据在计算机上存储的时候，存储的是二进制
//	// a--97,A--65
//	//char arr[] = "abc";//数组
//	////"abc"-----'a','b','c','\0'----'\0'字符串的结束标志，不算内容
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


//转义字符：转变原来的意思
//
//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("c:\t");//\t-水平制表符
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
//	//printf("%d\n", strlen("c:\test\32\test.c"));//\32-----32是两个八进制数字，32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符，
//	printf("%c\n", '\x61');
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
 //while循环
//int main()
//{
//	int i = 0;
//	printf("加入比特\n");
//		while(i<=2000)
//		{
//			printf("敲一行代码:%d\n",i);
//			i++;
//		}
//		if (i >= 2000)
//		{
//		printf("好offer");
//		}
//
//	return 0;
//}

////函数:库函数+自定义函数
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
////数组:一组相同类型元素的集合
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
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
//	//移位（2进制位）操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a << 1;
//	int c = b << 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//
////运算符运算
//int main()
//{
//	//（2进制位）位操作
//	//&按位与，|按位或，^按位异或
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
////单目操作符!-，双面操作符+-*/，三目操作符
////C语言中我们表示真假，0假，1是真；
//int main()
//{
//	int a = 10, b = 20,c;
//	c = a + b;
//	printf("%d\n", !c);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	printf("%d\n", sizeof(arr));
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);
	//计算数组的元素个数
	// 个数 = 数组总大小/每个元素大小
	//int a = 10;
	////计算的是变量/类型所占空间的大小。单位是字节
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);
	return 0;
}