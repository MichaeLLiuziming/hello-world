#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//描述一个学生---一些数据
//名字，年龄，电话，性别
//struct 结构体关键字    stu--结构体标签    struct  stu---结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//是三个全局的结构体变量，尽量少用全局变量

//int main()
//{
//	struct stu s;//局部结构体变量
//	return 0;
//}

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//是三个全局的结构体变量，尽量少用全局变量
//
//int main()
//{
//	stu s = { "张三",20,"15249287076","男" };//局部结构体变量
//	struct stu s1 = { "旺财"，30，"17256428957","保密" };
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//
//void print1(stu s)
//{
//	printf("name = %s\n", s.name);
//	printf("age = %d\n", s.age);
//	printf("tele = %s\n", s.tele);
//	printf("sex = %s\n", s.sex);
//}
//
//void print2(stu* s)
//{
//	printf("name = %s\n", s->name);
//	printf("age = %d\n", s->age);
//	printf("tele = %s\n", s->tele);
//	printf("sex = %s\n", s->sex);
//}
//
//int main()
//{
//	stu s = { "张三",40,"15598886688","男" };
//	print1(s);
//	printf("\n");
//	print2(&s);
//	return 0;
//}

