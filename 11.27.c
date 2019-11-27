#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b)  ((a)>(b))
int main()
{
	int x1 = 1, x2 = 2;
	printf("%d\n", MAX(x1, x2) * 5);
	printf("%d\n", MAX(x1|x2, x2&x1));//printf("%d\n",x1>x2)
	system("pause");
	return 0;
}