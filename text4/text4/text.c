#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//int a = 10;//���ڴ�������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int* p = &a;
//	////printf("%p\n", p);
//	//*p = 20;//�����ò�����/��ӷ��ʲ�����
//	//double d = 3.1415;
//	//double* pd = &d;
//	//*pd = 20;
//	//printf("%lf\n",*pd);
//	//printf("%d\n", sizeof(pd));
//
//	return 0;
//}
//�ṹ��
// ���Ӷ���
//����+���+����+���֤���롪+��������
//����+����+������+����+���
//���Ӷ���---�ṹ��---�����Լ����������һ������
//����һ���ṹ������
#include <string.h>
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	struct Book b1 = {"c���Գ������",55};//����һ���ṹ�����
	struct Book* pb = &b1;
	strcpy(b1.name,"C++");//strcpy- string copy - �ַ�������-�⺯��-string.h
	printf("%s\n", b1.name);
	//����pb��ӡ���ҵ������ͼ۸�
	//.�ṹ�����.��Ա
	//-> �ṹ�����->��Ա
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("������%s\n", b1.name);
	//printf("�۸�%d\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
	return 0;
}