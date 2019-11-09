//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student
#include<stdio.h>
#include<stdlib.h>
void reverse_str(char* start, char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		++start;
		--end;
	}
}
int Strlen(char* str)
{
	int count = 0;
	while (*str++)
		++count;
	return count;
}
void reverse(char* str)
{
	char* cur = str;
	int len = Strlen(str);
	reverse_str(str, str + len - 1);
	while (*cur){
		char* start = cur;
		while (*cur != ' '  && *cur != '\0')
		{
			++cur;
		}
		reverse_str(start, cur );
		while (*cur == ' ')
			++cur;
	}
}
int main(){
	char str[] = "studeng a am i";
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}