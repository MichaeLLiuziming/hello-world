#include <stdio.h>

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//
//int main()
//{
//	//char ch = 'A';
//	//printf("ch = %c\n", ch);
//	int age = 20;
//	printf("age = %d\n", age);
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	short int age = 20;
//	float weight = 95.6f;
//	return 0;
//}

//int num2 = 20;
//int main()
//{
//	int num1 = 10;
//	return 0;
//}
//局部变量和全局变量的名字的名字相同时，局部变量优先。
//int a = 20;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
	

//
//int main()
//{	int sum = 0;
//	int a = 10;
//	int b = 20;
//	scanf_s("%d%d", &a, &b);
//
//	sum = a + b;
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int global = 2000;
//
//void test()
//{
//	printf("test----%d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("global = %d\n", global);
//	return 0;
//}
//局部变量的作用域是变量所在的局部范围，全局变量的作用域是整个工程

//int main()
//{
//	//extern声明外部变量
//	extern g_val;
//	printf("g_val = %d\n ", g_val);
//	return 0;
//}
//局部变量的生命周期是进入作用域生命周期开始，出作用域生命周期结束，全局变量的生命周期是整个程序的生命周期
int main()
{		
	int a = 10;
	{
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
	return 0;
}