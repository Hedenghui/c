//strcat Ä£ÄâÊµÏÖ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char*dst, const char*src)
{
	assert(dst&&src);
	char*ret = dst;
	while (*dst != '\0')
	{
		++dst;
	}
	while (*dst++ = *src++);
	/*while(*src!='\0')
	{
		*dst = *src;
		*src++;
		*dst++;
	}
	*dst = '\0';*/
	return ret;
}
int main()
{
	char* p1 = "hello";
	char p2[11] = "world";
	my_strcat(p2,p1);
	printf("%s\n", p2);
	system("pause");
	return 0;
}
