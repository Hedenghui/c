#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//不使用（a + b） / 2这种方式，求两个数的平均值。
//      (a&b)+((a^b)>>1):   (a+b)/2
//  11   1011
//   9   1001
//a&b=   1001
//a^b=   0010
int avg(int a, int b)
{
	return (a&b) + ((a^b) >> 1);
}
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", avg(m, n));
	system("pause");
	return 0;
}
