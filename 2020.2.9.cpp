//����һ���������͵����� nums�����дһ���ܹ��������顰�����������ķ�����
//
//���������������������������ģ����������������������Ԫ����ӵĺ͵����Ҳ�����Ԫ����ӵĺ͡�
//
//������鲻����������������ô����Ӧ�÷��� - 1����������ж��������������ô����Ӧ�÷��������ߵ���һ����

#include<stdio.h>
#include<stdlib.h>

int pivotIndex(int* nums, int numsSize)
{
	int i, right = 0, left = 0;
	if (numsSize == 0)
	{
		return -1;
	}
	for (int i = 1; i<numsSize; i++)
	{
		right += nums[i];
	}
	i = 0;
	while (left != right&&i<numsSize - 1)
	{
		left += nums[i];
		i++;
		right -= nums[i];
	}
	if (left == right)
	{
		return i;
	}
	else
	{
		return -1;
	}
}
int main()
{
	system("pause");
	return 0;
}
