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
//	//strcpy,�ַ�������
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
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}

//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	const int num = 10;//const�����ܸģ���̬
//	int n = 100;
//	int*  p = &num;
//	//const int* p = &num;//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num)��ֵ
//	//int* const p = &num;//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı䡣
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy,�ַ�������
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