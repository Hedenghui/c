#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//{1,2,3,1,2}
//0001
//0010
//0011
//0001
//0010
//对应位连续异或的结果： 奇数个1：1
//                       偶数个1：0
int main()
{
	int* a;
	int num;
	scanf("%d", &num);
	a = (int*)malloc(sizeof(int)* num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	int ret = a[0];
	for (int i = 1; i < num; i++)
	{
		ret ^= a[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}