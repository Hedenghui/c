//给定一个整数类型的数组 nums，请编写一个能够返回数组“中心索引”的方法。
//
//我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
//
//如果数组不存在中心索引，那么我们应该返回 - 1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。

#include<stdio.h>
#include<stdlib.h>

int pivotIndex(int* nums, int numsSize)
{
	int i, right = 0, left = 0;
	if (numsSize == 0)
	{
		return -1;
	}
	for (int i = 1; i<numsSize; i++)
	{
		right += nums[i];
	}
	i = 0;
	while (left != right&&i<numsSize - 1)
	{
		left += nums[i];
		i++;
		right -= nums[i];
	}
	if (left == right)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
int main()
{
	system("pause");
	return 0;
}
