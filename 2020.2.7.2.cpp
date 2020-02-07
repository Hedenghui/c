//给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* reverse(char *S, int begin, int end)
{
	while (begin<end)
	{
		if (('a' <= S[begin] && S[begin] <= 'z') || ('A' <= S[begin] && S[begin] <= 'Z'))
		{
			if (('a' <= S[end] && S[end] <= 'z') || ('A' <= S[end] && S[end] <= 'Z'))
			{
				char str = S[begin];
				S[begin] = S[end];
				S[end] = str;
				begin++;
				end--;
			}
			else
			{
				end--;
			}
		}
		else
		{
			begin++;
		}
	}
	return S;
}
char * reverseOnlyLetters(char * S){
	char*p = reverse(S, 0, strlen(S) - 1);
	return p;
}
int main()
{
	system("pause");
	return 0;
}