#include <stdio.h>

////��������
////strlen ���� - �����ַ����ĳ��ȣ��ҵ�\0��ֹ
////�Զ���strlen����
////1.�������ķ���
////2.�ݹ�
////3.ָ��-ָ��
//
////��һ�������� 
//#include <assert.h>
//
////strlen�����ķ���������unsigned int �޷�������
////size_t == unsigned int 
//int my_strlen(const char* str)   //str���ɱ䣬��const
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
////�������ݹ鷽�� - ��������ʱ���������ַ�������
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//"abcdef"ʵ������a b c d e f \0
//	//char arr[] = { 'a','b','c','d','e','f' };  error
//	//����û��\0��ʹ��strlen()����������һ�����ֵ����strlen���������ַ������ȵ��ַ�������Ҫ��\0��β
//	//int len = strlen(arr);
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)
//	//strlen���������޷������������޷�������Ӽ������޷�����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	} 
//	//��� hehe
//	//����������Լ�д�ĺ���my_strlen���ʹ�ӡ haha
//	//���ַ������и��ĺã�strlen()���Է�ֹ�ַ�������Ϊ�����������
//	// my_strlen()������������ƽʱд����ʱ�ٳ���,����������
//	return 0;
//}

////strcpy���� - ��һ�����ݿ���������һ��������
////ע�����
////1.Դ�ַ���������'\0'����
////2.�Ὣ'\0'������Ŀ��ռ�
////3.�ռ�����㹻����ȷ���ܴ�ţ��ռ仹����ɱ�
////4.ѧ��ģ��ʵ��
//
//#include <assert.h>
//
//char* my_strcmp(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	//����ʾ����
//	//char* parr = "abcdef";
//	//����ǳ����ַ��������ܱ��ı�
//	char arr2[] = "mnq";
//	my_strcmp(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcat����  - �ַ�����׷��
////ע�����
////1.Դ�ַ���������'\0'����
////2.Ŀ��ռ�������㹻��Ŀռ�
////3.Ŀ��ռ��������޸�
////4.�ַ��������Լ����Լ�׷��
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
//	//arr1[30]��Ϊ��������arr2
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}