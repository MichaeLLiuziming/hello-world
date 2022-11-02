#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//int a = 10;//向内存申请了4个字节的空间
//	////printf("%p\n", &a);
//	//int* p = &a;
//	////printf("%p\n", p);
//	//*p = 20;//解引用操作符/间接访问操作符
//	//double d = 3.1415;
//	//double* pd = &d;
//	//*pd = 20;
//	//printf("%lf\n",*pd);
//	//printf("%d\n", sizeof(pd));
//
//	return 0;
//}
//结构体
// 复杂对象
//名字+身高+年龄+身份证号码—+。。。。
//书名+作者+出版社+定价+书号
//复杂对象---结构体---我们自己创造出来的一种类型
//创建一个结构体类型
#include <string.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	struct Book b1 = {"c语言程序设计",55};//创建一个结构体变量
	struct Book* pb = &b1;
	strcpy(b1.name,"C++");//strcpy- string copy - 字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);
	//利用pb打印出我的书名和价格
	//.结构体变量.成员
	//-> 结构体变量->成员
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d\n", b1.price);
	return 0;
}