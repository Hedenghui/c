//����һ���ǿ����飬���ش������е������������������ڣ��򷵻���������������Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��
#include<stdio.h>
#include<stdlib.h>
int comp(int *a, int *b)
{
	return (*a)>(*b) ? 1 : 0;
}
int thirdMax(int* nums, int numsSize)
{
	int cnt = 0;
	qsort(nums, numsSize, sizeof(int),comp);
	for (int str = 0; str<numsSize - 1; str++)
	{
		if (nums[str + 1] != nums[str])
		{
			nums[++cnt] = nums[str + 1];// 1 2 2 3 4
			                            //   1   2 3
		}
	}
	if (cnt >= 2)
	{
		return nums[cnt - 2];
	}
	else
	{
		return nums[cnt];
	}
}
int main()
{
	system("pause");
	return 0;
}