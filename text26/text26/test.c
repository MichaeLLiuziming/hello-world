#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void my_strcpy(char* dest,char* src)
//{
//	while (*dest != '\0')
//	{
//		*dest++ = *src++;
//		//src++;
//		//dest++;
//	}
//	//*dest = *src;
//}
//
//int main()
//{
//	//strcpy,字符串拷贝
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//			{
//				;
//			}
//	}
//	
//}

//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	const int num = 10;//const代表不能改，静态
//	int n = 100;
//	int*  p = &num;
//	//const int* p = &num;//const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num)的值
//	//int* const p = &num;//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变。
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包括'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy,字符串拷贝
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int lren = my_strlen(arr);
//	return 0;
//}