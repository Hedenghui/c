#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//a[i][j]=a[i-1][j-1]+a[i-1][j]
int main()
{
	int row;
	scanf("%d", &row);
	//动态二维数组
	int** arr = (int**)malloc(sizeof(int*)*row);
	for (int i = 0; i < row; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)*(i + 1));
	}
	for (int i = 0; i < row; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (int i = 2; i < row; i++)
	{
		for (int j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//释放
	for (int i = 0; i < row; i++)
	{
		free(arr[i]);
	}
	free(arr);
	system("pause");
	return 0;
}