//«ÛN£°
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int c = 1, b = 2,a;
//	scanf("%d", &a);
//	while (b <= a)
//	{
//		c = c*b;
//		b++;
//	}
//	printf("%d\n", c);
//	system("pause");j
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	double sum = 1.0;
	double demo = 2.0;
	int sign = 1;
	while (demo<=100)
	{
		sign = (1)*sign;
		sum = sum + sign*(1 / demo);
		demo++;
	}
	printf("%f\n", sum);
	system("pause");
	return 0;
}
