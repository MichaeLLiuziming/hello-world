#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<string.h>

//int main()
//{
//	//int ch = 0;
//	////�ļ�������־
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0,ch=0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������벢�����password������
//	//getchar();//���һ�λ�������������ʣ��һ����\n')
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//
//	//int i = 0;//��ʼ��
//	//while (i < 10)//�ж�
//	//{
//	//	i++;//����
//	//}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++) 
//	{
//		if (i == 5)
//			continue;
//		printf("i = %d\n", i);
//	}	
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	for (i = 0; i < 10; i++)
//	{
//		if (5 == i)
//			printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0,a=0;
//	for (i=0; i < 10; i++)
//	{
//		for ( j=0;j < 10; j++)
//		{
//			printf("hehe\n");
//			a++;
//			printf("%d\n",a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0, k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//		k++;
//	return 0;
//}	
//��ֵ=�͵�==�ں�һ����������Ǹ���

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i=0, sum=1,n=0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		sum = i * sum;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int S = 1;
//	int sum = 0;
//	int n = 0;
//	for(n=1;n<=3;n++)
//	{
//			for (i = 1; i <= n; i++)
//			{
//				S = i * S;	
//			} 
//		sum = sum + S;
//		S = 1;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, S = 1, sum = 0;
//	for (i = 1; i < 11; i++)
//	{
//		S = i * S;
//		sum = sum + S;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i, S = 1, sum = 0;
//	for (i = 1; i < 11; i++)
//	{
//		S = i * S;
//		sum = sum + S;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 },i=0;
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//дһ�����룬��arr��������7
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if(i == sz)
//	{
//		printf("û�ҵ�\n");
//	}
//
//	return 0;     
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}
//#include <windows.h>
//#include<stdlib.h>
//int main()
//{
//	//welcome to bite
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���--cls �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] ="lm1998";
//	int i = 0;
//	while(i<3)
//	{
//		printf("����������\n");
//		scanf("%s", arr1);
//		if(strcmp(arr1,"123456")==0)//�ȺŲ��������Ƚ������ַ������,Ӧ��ʹ��һ���⺯��--strcmp
//			{
//				printf("������ȷ\n");
//				break;
//			}
//	        i++;
//		if(i==3)
//			{
//				printf("��������\n");
//			
//			}
//	}
//	
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�ȺŲ��������Ƚ������ַ������,Ӧ��ʹ��һ���⺯��--strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������\n");

	}
	return 0;
}