//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
#include<stdio.h>
#include<stdlib.h>
bool containsDuplicate(int* nums, int numsSize){
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{
			if (nums[i] == nums[j])
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	system("pause");
	return 0;
}