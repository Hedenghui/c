#include<stdio.h>
#include<stdlib.h>
void reverse(int* nums, int left, int right)
{
	while (left<right)
	{
		int src = nums[left];
		nums[left] = nums[right];
		nums[right] = src;
		right--;
		left++;
	}
}
int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{
	int* addret = (int*)malloc(10001 * sizeof(int));
	int reti = 0;
	int end = ASize - 1;
	int next = 0;
	while (end >= 0 || K>0)
	{
		int x1 = 0;
		if (end >= 0)
		{
			x1 = A[end];
			end--;
		}
		int x2 = 0;
		if (K>0)
		{
			x2 = K % 10;
			K /= 10;
		}
		int num = x1 + x2 + next;
		if (num >= 10)
		{
			num %= 10;
			next = 1;
		}
		else
		{
			next = 0;
		}
		addret[reti++] = num;
	}
	if (next == 1)
	{
		addret[reti++] = 1;
	}
	reverse(addret, 0, reti - 1);
	*returnSize = reti;
	return addret;
}
int main()
{
	system("pause");
	return 0;
}