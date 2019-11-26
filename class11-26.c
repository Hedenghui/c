#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fout=fopen("class11-26.c", "r");
	char ch = fgetc(fout);
	while (ch!=EOF)
	{
		printf("%c", ch);
		ch = fgetc(fout);//调用fgetc自动下一位
	}
	system("pause");
	return 0;
}
