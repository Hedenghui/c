//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//����Լ������������ظ�Ԫ�ء�
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