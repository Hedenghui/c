#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
int main()
{
	int n=20;
	int total = n;
	int empty = n;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;

	}
	printf("%d", total);
	system("pause");
	return 0;
}