#include <stdio.h>

////函数介绍
////strlen 函数 - 计算字符串的长度，找到\0截止
////自定义strlen函数
////1.计数器的方法
////2.递归
////3.指针-指针
//
////法一：计数器 
//#include <assert.h>
//
////strlen函数的返回类型是unsigned int 无符号整型
////size_t == unsigned int 
//int my_strlen(const char* str)   //str不可变，加const
//{
//	int count = 0;
//	while (*str != '\0')  //while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////法二：递归方法 - 不创建临时变量，求字符串长度
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//"abcdef"实际上是a b c d e f \0
//	//char arr[] = { 'a','b','c','d','e','f' };  error
//	//里面没有\0，使用strlen()函数后他是一个随机值，用strlen函数计算字符串长度的字符串必须要有\0结尾
//	//int len = strlen(arr);
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)
//	//strlen返回类型无符号数，两个无符号数相加减还是无符号数
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	} 
//	//结果 hehe
//	//如果用我们自己写的函数my_strlen，就打印 haha
//	//两种方法各有各的好，strlen()可以防止字符串长度为负数的情况，
//	// my_strlen()可以是我们在平时写代码时少出错,不产生歧义
//	return 0;
//}

////strcpy函数 - 将一个内容拷贝到到另一个内容中
////注意事项：
////1.源字符串必须以'\0'结束
////2.会将'\0'拷贝到目标空间
////3.空间必须足够大，以确保能存放，空间还必须可变
////4.学会模拟实现
//
//#include <assert.h>
//
//char* my_strcmp(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	//错误示范：
//	//char* parr = "abcdef";
//	//这个是常量字符串，不能被改变
//	char arr2[] = "mnq";
//	my_strcmp(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcat函数  - 字符串的追加
////注意事项：
////1.源字符串必须以'\0'结束
////2.目标空间必须有足够大的空间
////3.目标空间必须可以修改
////4.字符串不能自己给自己追加
//
//#include <assert.h>
//my_strcat(char* dest, const char* src)
//{
//	//1.
//	//assert(dest);
//	//assert(src);
//	//2.
//	//assert(dest && src)
//	//3.
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "hello ";
//	//arr1[30]是为了能容下arr2
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}