//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//����Լ������������ظ�Ԫ�ء�
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