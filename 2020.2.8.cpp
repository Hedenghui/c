//����һ���Ǹ��������� A������һ�����飬�ڸ������У� A ������ż��Ԫ��֮�������������Ԫ�ء�
//����Է���������������κ�������Ϊ�𰸡�
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