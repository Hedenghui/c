//给定一个整数数组，判断是否存在重复元素。
//如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}
bool containsDuplicate(int*nums, int numsSize)
{
	qsort(nums, numsSize, sizeof(int), compare);
	for (int i = 0; i<numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	system("pause");
	return 0;
}