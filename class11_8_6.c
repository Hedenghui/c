//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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