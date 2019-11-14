//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
void find2(int* arr, int sz)
{
	int ret = 0;
	int index = 0;
	int num1 = 0, num2 = 0;
	for (int i = 0; i < sz; ++i)
	{
		ret ^= arr[i];
	}
	//ret: 两个单独出现的数字的异或结果
	//ret: 找到任意一个二进制值为1的位置
	for (int i = 0; i < 32; ++i)
	{
		if (((ret >> i) & 1) == 1)
		{
			index = i;
			break;
		}
	}

	for (int i = 0; i < sz; ++i)
	{
		//通过index位的二进制值把数组分成两组， 每组中有一个数字单独出现一些
		if (((arr[i] >> index) & 1) == 1)
			num1 ^= arr[i];
		else
			num2 ^= arr[i];
	}

	printf("%d %d\n", num1, num2);
}

int main()
{
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)* n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	find2(arr, n);
	system("pause");
	return 0;
}