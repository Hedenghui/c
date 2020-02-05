//给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
//
//说明 :
//
//
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
//你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
#include<stdio.h>
#include<stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1]>nums2[end2])
		{
			nums1[end] = nums1[end1];
			end--;
			end1--;
		}
		else
		{
			nums1[end] = nums2[end2];
			end--;
			end2--;
		}
	}
	while (end2 >= 0)
	{
		nums1[end] = nums2[end2];
		end--;
		end2--;
	}
}
int main()
{
	system("pause");
	return 0;
}