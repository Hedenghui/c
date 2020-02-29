#include<stdio.h>
#include<stdlib.h>
void reverse(int* nums, int first, int end)
{
	int tmp;
	while (first<end)
	{
		tmp = nums[first];
		nums[first] = nums[end];
		nums[end] = tmp;
		first++;
		end--;
	}
}
void rotate(int* nums, int numsSize, int k)
{
	k %= numsSize;
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize - 1);
}
int main()
{
	system("pause");
	return 0;
}