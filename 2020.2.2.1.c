//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。
#include<stdio.h>
#include<stdlib.h>
 int searchinsert(int* nums, int numssize, int target){
     int i;
     for(i=0;i<numssize;i++)
     {
         if(nums[i]>=target)
         return i;
     }
     return numssize;
 }
 int main()
 {
	 system("pause");
	 return 0;
 }