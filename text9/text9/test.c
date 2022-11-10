#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点	
//	//time_t time(time_t *timer)
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	printf("开始游戏\n");
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//			
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了，正确数字是：%d\n",ret);
//				break;
//		}
//	}
//}
//
//
//
//void menue()
//{
//	printf("**************************************   \n");
//	printf("*****     1.play       2.exit    *****   \n");
//	printf("**************************************   \n");
//}
//
//int main()
//{
//	int i = 0;
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menue();
//		printf("请选择>：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}
#include<string.h>

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - 执行系统命令的
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑1分钟内关机，如果输入我是猪，取消关机\n请输入>：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system() - 执行系统命令的
	system("shutdown -s -t 60");
while(1)
{
	printf("请注意，你的电脑1分钟内关机，如果输入我是猪，取消关机\n请输入>：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		break;
	}
}
	return 0;
}