//strstr Ä£ÄâÊµÏÖ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
char* my_strstr(const char*src, const char*sub)
{
	assert(src&&sub);
	const char*srci = src;
	const char*subi = sub;
	while (*srci != '\0')
	{
		while (*srci == *subi&&*subi!='\0')
		{
			++srci;
			++subi;
		}
		if (*subi == '\0')
		{
			return src;
		}
		else
		{
			subi = sub;
			++src;
			srci = src;
		}
	}
	return NULL;
}




int main()
{
	char* p1 = "aaaabcd";
	char* p2 = "aaab";
	char*pos = my_strstr(p1, p2);
	printf("%s\n", pos);
	system("pause");
	return 0;
}