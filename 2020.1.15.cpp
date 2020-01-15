
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int  num;
//	int a = 153;
//	int b = 123;
//	num = a + b;
//	printf("%d\n", num)
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS

#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int max(int x, int y);
	int a, b;
	scanf("%d,%d", &a, &b);
	printf("max=%d", max(a,b));
	system("pause");
	return 0;
}
int max(int x, int y)
{
	/*if (x > y)
	{
	return x;
	}
	else
	{
	return y;
	}*/
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return (z);
}
