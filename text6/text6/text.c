#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<string.h>

//int main()
//{
//	//int ch = 0;
//	////文件结束标志
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0,ch=0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码并存放在password数组中
//	//getchar();//清空一次缓存区（缓存区剩下一个‘\n')
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
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
//	//int i = 0;//初始化
//	//while (i < 10)//判断
//	//{
//	//	i++;//调整
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
//赋值=和等==于号一定分清楚，是个坑

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
//	//写一个代码，在arr数组中找7
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if(i == sz)
//	{
//		printf("没找到\n");
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
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
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的函数--cls 清空屏幕
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
//		printf("请输入密码\n");
//		scanf("%s", arr1);
//		if(strcmp(arr1,"123456")==0)//等号不能用来比较两个字符串相等,应该使用一个库函数--strcmp
//			{
//				printf("输入正确\n");
//				break;
//			}
//	        i++;
//		if(i==3)
//			{
//				printf("重新输入\n");
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
		printf("请输入密码:>\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//等号不能用来比较两个字符串相等,应该使用一个库函数--strcmp
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次输入错误\n");

	}
	return 0;
}