//给定一个非负整数数组 A，返回一个数组，在该数组中， A 的所有偶数元素之后跟着所有奇数元素。
//你可以返回满足此条件的任何数组作为答案。
#include<stdio.h>
#include<stdlib.h>

int* sortArrayByParity(int* A, int ASize, int* returnSize)
{
	int*num = (int*)malloc(sizeof(int)*ASize);
	int begin = 0;
	int end = ASize - 1;
	for (int i = 0; i<ASize; i++)
	{
		if (A[i] % 2 == 0)
		{
			num[begin] = A[i];
			begin++;
		}
		else
		{
			num[end] = A[i];
			end--;
		}
	}
	*returnSize = ASize;
	return num;
}
int main()
{
	system("pause");
	return 0;
}