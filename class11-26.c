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
		ch = fgetc(fout);//����fgetc�Զ���һλ
	}
	system("pause");
	return 0;
}
