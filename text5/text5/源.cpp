#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	//;//是语句--1空语句
//	int age = 11;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱");
//	}
//	else if (age < 28 && age >= 18)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("青壮年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年");
//	else
//		printf("老年");
//	//if (age < 19)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//		if (a == 1)
//			{
//				if (b == 2)
//				printf("hehe\n");
//			}
//		else
//			printf("haha\n");
//	return 0;
//}
//else和他最近的else匹配

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//float a = (num % 2);
//	if ((num % 2) !=0)
//	{ 
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//		
//	//if (num = 5)//一个等号是赋值
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}
//
//int main()
//{
//	int i=1;
//	while (i <= 100 && i > 0)
//	{
//		if (i % 2 != 0)
//			printf("奇数：%d\n",i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 3;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n"); break;
//	case 2:
//		printf("星期二\n"); break;
//	case 3:
//		printf("星期三\n"); break;
//	case 4:
//		printf("星期四\n"); break;
//	case 5:
//		printf("星期五\n"); break;
//	case 6:
//		printf("星期六\n"); break;
//	case 7:
//		printf("星期日\n"); break;
//	default:
//		printf("输入错误\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 3;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n"); break;
//	case 6:
//	case 7:
//		printf("休息日\n"); break;
//	default:
//		printf("输入错误\n"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//		continue;//终止本次循环后面的语句，不执行后面的代码。跳过打印数字5
//		printf("%d\n",i);
//	}		
//	return 0;
//}
//	

int main()
{
	int ch = 0;
	//ctrl+z
	//EOF----end of file ---- -1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	return 0;
}