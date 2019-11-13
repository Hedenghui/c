//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void reverseArr(int*arr, int sz)
{
	int start = 0;
	int end = sz - 1;
	while (start < end)
	{
		while (start < end&&arr[start] % 2 != 0)
		{
			start++;
		}
		while (start < end&&arr[end] % 2 == 0)
		{
			end--;
		}
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		start++;
		end--;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	reverseArr(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}