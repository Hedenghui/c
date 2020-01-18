#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float f;
	scanf("%lf",&f);
	float c;
	c = (5.0/ 9)*(f - 32);
	printf("%lf\n", c);
	system("pause");
	return 0;
}