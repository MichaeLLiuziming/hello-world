#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ��ѧ��---һЩ����
//���֣����䣬�绰���Ա�
//struct �ṹ��ؼ���    stu--�ṹ���ǩ    struct  stu---�ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//������ȫ�ֵĽṹ���������������ȫ�ֱ���

//int main()
//{
//	struct stu s;//�ֲ��ṹ�����
//	return 0;
//}

//typedef struct stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//������ȫ�ֵĽṹ���������������ȫ�ֱ���
//
//int main()
//{
//	stu s = { "����",20,"15249287076","��" };//�ֲ��ṹ�����
//	struct stu s1 = { "����"��30��"17256428957","����" };
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
//	//��Ա����
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
//	stu s = { "����",40,"15598886688","��" };
//	print1(s);
//	printf("\n");
//	print2(&s);
//	return 0;
//}

