//strcmp 模拟函数
//第一个大于第二个，返回大于0的数字；
//相等，返回0；
//第一个小于第二个，返回小于0的数字；
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strcmp(const char*str1, const char*str2)
{
	int ret = 0;
	assert(str1&&str2);
	unsigned char*s1 = (unsigned char*)str1;
	unsigned char*s2 = (unsigned char*)str2;
	while (*s1&&*s2)
	{
		if (*s1 > *s2)
		{
			return 1;
		}
		else if (*s1 < *s2)
		{
			return -1;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	// hello  hello
	// hello  hello1
	// hello1 hello
	if (*s1 == '\0'&&*s2 == '\0')
	{
		return 0;
	}
	else if (*s1 == '\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
	return ret;
}
int main()
{
	char*s1 = "hello";
	char*s2 = "hello1";
	printf("%d\n", my_strcmp(s1, s2));
	system("pause");
	return 0;
}