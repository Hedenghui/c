/*����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��

���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�

����Լ���������� 0 ֮�⣬��������������㿪ͷ*/


#include<stdio.h>
#include<stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int end = digitsSize - 1;
	for (end; end >= 0; end--)
	{
		if (digits[end] < 9)
		{
			digits[end]+=1;
			*returnSize = digitsSize;
			return digits;
		}
		else
		{
			digits[end] = 0;
		}
	}
	int* num = (int*)malloc((digitsSize + 1) * sizeof (int));
	num[0] = 1;
	for (int i = 1; i < (digitsSize + 1); i++)
	{
		num[i] = 0;
	}
	*returnSize = digitsSize + 1;
	return num;
}
int main()
{
	system("pause");
	return 0;
}
