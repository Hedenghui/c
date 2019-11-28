#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f1 = 0, f2 = 1, f3=0;
	int n = 0;
	scanf("%d",&n);
	while (f2 < n)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	int x1 = n - f1;
	int x2 = f2 - n;
	if (x1 < x2)
	{
		printf("%d\n", x1);
	}
	else
	{
		printf("%d\n", x2);
	}
	system("pause");
	return 0;
}