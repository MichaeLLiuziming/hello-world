#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//字符串的结束标志：‘\0’
//	//"abcdef"
//	//'\0'--转义字符--0
//	//0->数字0
//	//'0'->48
//	//'a','b','0'
//	//EOF - end of file - 文件结束标志 - 1
//	return 0;
//}
//
//int main()
//{
//	float a = 0, b = 0, c = 0;
//	scanf("%f%f", &a, &b);
//	if (a > b)
//		c = a;
//	else
//		c = b;
//	printf("%f\n",c);
//	return 0;
//}
//
//float Max(float x, float y)
//{
//	float c;
//	if (x > y)
//		c = x;
//	else
//		c = y;
//	return c;
//}
//
//int main()
//{
//	float a, b, c;
//	scanf("%f%f", &a, &b);
//	c = Max(a, b);
//	printf("%f\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//按2进制位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 补码
//	//11111111111111111111111111111110 反码
//	//10000000000000000000000000000001 原码
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	int a = 10;
//	int b = ++a;//前置++，先++，再使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与,按位与&
//	int a = 3, b = 15;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 190, b = 20, c;
//	c = (a > b ? --a : b++);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0 };
//	arr[2] = 4;
//	printf("arr[2] = %d\n", arr[2]);
//	return 0;
//}

//int main()
//{
//	//typedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 50;
//	printf("%d\n", num2);
//
//	return 0;
//}

//static修饰局部变量，局部变量的生命周期变长
//static修饰全局变量,改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法使用
////static 修饰函数,也是改变了函数的作用域---不准确
//static修饰函数，改变了函数的链接属性
//外部链接属性----》变成了内部链接属性
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

#define MAX 100;
//#define还可以定义宏--带参数
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

////宏的定义方式
//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//	//int a = MAX;
//	int a = 10, b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 's';
	printf("pc = %c\n", ch);
}
//int main()
//{
//	int a = 10;
//	//&a;
//	int* p = &a;
//	//有一种变量是用来存放地址的---指针变量
//	printf("&a = %p\n", &a);
//	printf("&a = %p\n", p);
//	*p=20;//解引用操作符
//	printf("&a = %d\n", a);
//	return 0;
//}