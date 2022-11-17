#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//创建数组----存放整型----10个
//	int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
//	char arr2[5] = {'a',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7   sizeof计算arr4所占空间大小，arr4放七个元素---char 7*1=7
//	printf("%d\n", strlen(arr4));//6   strlen计算字符串的长度-----‘\0’之前的字符个数
//	int n = 5;
//	//char ch[n];//ERROR，应制定常量表达式，数组创建，[]中要给定一个常量才可以，不能使用变量。
//	return 0;
//}

//1. strlen和sizeof没有什么关联
//2.strlen是求字符串长度的----只针对字符串求长度
//3.sizeof计算变量，数组，类型的大小--单位是字节--操作符
//


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));//a b c
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0;i < len;i++)
//	//{
//	//	printf("% c\n", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("% d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//}
//
////数组在内存中是连续存放的

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int n = 0;
//	//char ch[5][6];
//	//int arr2[] = { 1,2,3,4 };//二维数组，列数不能省略，行数可以省略
//	for (i = 0;i < 3;i++)
//	{
//		for (n = 0;n < 4;n++)
//		{
//			printf("&arr[%d][%d] = %p ",i,n, &arr[i][n]);
//		}
//		printf("\n");
//	}
//	return 0;
//}//二维数组连续存储


////冒泡排序，将一组数据排大小：两个循环，一次判断
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数,9趟冒泡排序
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);//
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int j = 0;
//		//每趟冒泡排序的内容
//		for (j = 0;j <sz-1-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本次排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 9,1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//
//	int i = 0;
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);//冒泡排序函数,10函数需要9套冒泡排序
//    for (i = 0;i < sz;i++)
//	{
//		printf("arr[%d] = %d\n",i,arr[i]);
//	}
//	return 0;
//}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9 };
    printf("%p\n", arr);//数组首元素地址
    printf("%p\n", arr+1);//数组的第二个元素地址
    printf("%p\n", &arr[0]);//数组首元素地址
    printf("%p\n", &arr[0]+1);//数组的第二个元素地址
    printf("%p\n", &arr);//&arr---数组的地址，只是从第一个元素的地址开始
    printf("%p\n", &arr+1);
    return 0;
}
//数组名代表首地址，两个除外
//1.sizeof(数组名)----数组名表示整个数组，sizeof(数组名）计算的是整个数组的大小，单位是字节
//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址