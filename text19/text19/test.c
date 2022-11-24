#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int a = 0;
//	//char b = 'w';
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof b);
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof( int [10]));
//	short s = 0;//短整型是2个字节
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//Sizeof内部的表达式不参与运算
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
	//00000000000000000000000000001011
	//00000000000000000000000000000100
	//00000000000000000000000000001111
	// 1<<2;
	//00000000000000000000000000000001
	//int a = 0;
	////按（二进制）位取反
	////00000000000000000000000000000000
	////11111111111111111111111111111111---补码
	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++,先++，后使用
//	printf("%d\n", a++);//后置++，先使用，再++
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;//逻辑与
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
///*	i = a++ && ++b && d++;*///逻辑与操作，左边出现第一个假，后面就不用算了
//	i = a++ || ++b || d++;//一真即真，一假即假
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	//printf("%d\n", b);
//	//b = (a > 5 ? 3 : -3);
//	return 0;
//}

//逗号表达式：就是用逗号隔开的多个表达式，逗号表达式，从左向右依次执行。整个表达式的结果是最后一个表达式的结果
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;//操作数：下标值和数组名
//	printf("%d\n", a[4]);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//调用函数的时候的（）就是函数调用操作符，函数名，函数值都是函数的参数，操作数至少一个，即函数名
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//学生
//int float类型
//struct是定义一种类型
//创建了一个结构体类型---struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct stu这个类型创建了一个学生对象s1,并初始化
//	struct stu s1 = { "张三",20,"2021316190145" };
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//000000000000000000000011
//	//00000011---a
//	char b = 127;
//	//000000000000000001111111
//	//01111111---b
//	//a和b如何相加
//	//00000011
//	//000000000000000000000011
//	//01111111
//	//000000000000000001111111
//	//000000000000000010000010
//	//10000010--c
//	//111111111111111110000010---补码
//	//111111111111111110000001---反码
//	//100000000000000001111110---原码
//	char c = a + b;
//	//
//	printf("%d\n", c);
//	return 0;
//}

////整型提升，隐式类型转换
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//整型提升，自动把符号位补全
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//讨论的是小于等于整型的，才会有隐形转换
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//只要进行算术运算，就会进行整型提升
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = b + a + 3;
	return 0;
}