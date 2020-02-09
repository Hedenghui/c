/*给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头*/


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
