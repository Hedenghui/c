//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�

//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�

//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�


#include<stdio.h>
#include<stdlib.h>
int removeElement(int* nums, int numsSize, int val){
	int dst = 0;
	int str = 0;
	while (str<numsSize)
	{
		if (nums[str] != val)
		{
			nums[dst] = nums[str];
			str++;
			dst++;
		}
		else
		{
			str++;
		}
	}

	for (int i = 0; i<dst; i++)
	{
		printf("%d", nums[i]);
	}
	return dst;

}
int main()
{
	system("pause");
	return 0;
}