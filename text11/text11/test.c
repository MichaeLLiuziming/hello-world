#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//���庯��
//�β�-��ʽ����-��ʽ�ϲ��������������ý������βξ�������
//��ʵ�δ����β�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı��βε�
//��ֵ���ã���ַ����
//����Դ洢�ռ����ֵ�����仯�����ô�ֵ�����Դ洢�ռ�ֵ�����˱仯����ô�ַ
int is_prime(int t)//��������Int
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
		     //�ж�i�Ƿ�������
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