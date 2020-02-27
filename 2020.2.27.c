#include<stdio.h>
#include<stdlib.h>
int removeElement(int* nums, int numsSize, int val)
{
	int src = 0;
	int dst = 0;
	while (src<numsSize)
	{
		if (nums[src] == val)
		{
			src++;
		}
		else
		{
			nums[dst] = nums[src];
			dst++;
			src++;
		}
	}
	return dst;
}
int main()
{
	system("pause");
	return 0;
}