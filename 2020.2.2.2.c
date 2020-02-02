//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。
#include<stdio.h>
#include<stdlib.h>
int searchInsert(int* nums, int numsSize, int target){
	int low = 0, high = numsSize - 1;
	int mid;
	while (low <= high){
		mid = low + (high - low) / 2;
		if (nums[mid] == target)
			return mid;
		else if (nums[mid] <target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return low;
}
int main()
{
	system("pause");
	return 0;
}