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
//	short s = 0;//��������2���ֽ�
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//Sizeof�ڲ��ı��ʽ����������
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
	////���������ƣ�λȡ��
	////00000000000000000000000000000000
	////11111111111111111111111111111111---����
	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//ǰ��++,��++����ʹ��
//	printf("%d\n", a++);//����++����ʹ�ã���++
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
//	int c = a || b;//�߼���
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
///*	i = a++ && ++b && d++;*///�߼����������߳��ֵ�һ���٣�����Ͳ�������
//	i = a++ || ++b || d++;//һ�漴�棬һ�ټ���
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

//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ�����ű��ʽ��������������ִ�С��������ʽ�Ľ�������һ�����ʽ�Ľ��
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;//���������±�ֵ��������
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
//	//���ú�����ʱ��ģ������Ǻ������ò�������������������ֵ���Ǻ����Ĳ���������������һ������������
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//ѧ��
//int float����
//struct�Ƕ���һ������
//������һ���ṹ������---struct stu
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
//	//ʹ��struct stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct stu s1 = { "����",20,"2021316190145" };
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
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
//	//a��b������
//	//00000011
//	//000000000000000000000011
//	//01111111
//	//000000000000000001111111
//	//000000000000000010000010
//	//10000010--c
//	//111111111111111110000010---����
//	//111111111111111110000001---����
//	//100000000000000001111110---ԭ��
//	char c = a + b;
//	//
//	printf("%d\n", c);
//	return 0;
//}

////������������ʽ����ת��
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//�����������Զ��ѷ���λ��ȫ
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//���۵���С�ڵ������͵ģ��Ż�������ת��
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//ֻҪ�����������㣬�ͻ������������
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