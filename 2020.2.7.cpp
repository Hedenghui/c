//����һ�����ǵݼ�˳��������������� A������ÿ�����ֵ�ƽ����ɵ������飬Ҫ��Ҳ���ǵݼ�˳������

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