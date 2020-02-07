//给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。

#include<stdio.h>
#include<stdlib.h>

int comp(const void*a, const void*b)
{
	return *(int*)a - *(int*)b;
}
int* sortedSquares(int* A, int ASize, int* returnSize)
{
	int*num = (int*)malloc(sizeof(int)*ASize);
	for (int i = 0; i<ASize; i++)
	{
		num[i] = A[i] * A[i];
	}
	qsort(num, ASize, sizeof(int), comp);
	*returnSize = ASize;
	return num;
}
int main()
{
	system("pause");
	return 0;
}