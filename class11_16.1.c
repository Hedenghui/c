//strcpy Ä£ÄâÊµÏÖ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* my_strcpy(char*dst, const char*src)
{
	char* ret = dst;
	//while (*src!= '\0');
	while (*dst++ = *src++)
	{
		;
	}
	*dst = '\0';
	return ret;
}
//char* my_strcpy(char*dst, const char*src)
//{
//	char* ret = dst;
//	while (*src!= '\0');
//	while (*src)
//	{
//		*dst = *src;
//		++src;
//		++dst;
//	*dst = '\0';
//	return ret;
//}
int main()
{
	char p1[] = "hello111";
	char p2[20];
	char p3[20];
	my_strcpy(p2, p1);
	my_strcpy(p3, my_strcpy(p2, p1));
	printf("%s\n", p2);
	printf("%s\n", p3);
	system("pause");
	return 0;
}