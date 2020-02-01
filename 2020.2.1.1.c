//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
#include<stdio.h>
#include<stdlib.h>
void reverse(int*nums, int start, int end)
{
	while (start<end)
	{
		int temp = nums[start];
		nums[start] = nums[end];
		nums[end] = temp;
		start++;
		end--;
	}
}
void rotate(int* nums, int numsSize, int k){
	k %= numsSize;
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}
