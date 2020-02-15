//给定一个整数数组，你需要寻找一个连续的子数组，如果对这个子数组进行升序排序，那么整个数组都会变为升序排序。

//你找到的子数组应是最短的，请输出它的长度。
#include<stdio.h>
#include<stdlib.h>
#define MAX(X,Y) (X > Y ? X : Y)
#define MIN(X,Y) (X < Y ? X : Y)

int findUnsortedSubarray(int* nums, int numsSize){

	if (numsSize == 1)
	{
		return 0;
	}

	int min = INT_MAX;//15
	int max = INT_MIN;//2
	int left, right;

	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] < nums[i - 1])
		{
			min = MIN(min, nums[i]);//9
			max = MAX(max, nums[i - 1]);//10
		}
	}

	if (max == INT_MIN || min == INT_MAX)
	{
		return 0;
	}

	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] > min)
		{
			left = i;
			break;  //找到了就得退出。
		}

	}

	for (int j = numsSize - 1; j >= 0; j--)
	{
		if (nums[j] < max)
		{
			right = j;
			break;
		}
	}

	return right - left + 1;
}
int main()
{
	system("pause");
	return 0;
}