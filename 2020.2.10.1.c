//����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
//
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ��㲻���ظ��������������ͬ����Ԫ�ء�

#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *num = (int *)malloc(sizeof(int)* 2);
	num[0] = 0;
	num[1] = 0;
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				num[0] = i;
				num[1] = j;
				*returnSize = 2;
				return num;
			}
		}
	}
	return 0;
}
int main()
{
	system("pause");
	return 0;
}