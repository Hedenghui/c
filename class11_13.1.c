//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void find(int **arr, int row, int col, int key, int*px, int*py)
{
	//���½ǿ�ʼ���ң�row-1,0)
	int startx = row - 1;
	int starty = 0;
	while (startx >= 0 && starty < col)
	{
		if (arr[startx][starty] == key)
		{
			*px = startx;
			*py = starty;
			return;
		}
		else if (arr[startx][starty]>key)
		{
			startx--;
		}
		else
		{
			starty++;
		}
		*px = -1;
		*py = -1;
		return ;
	}
}
int main()
{
	int row, col, key;
	int px = -1, py = -1;
	printf("row col:\n");
	scanf("%d %d", &row, &col);
	printf("input element\n");
	int**arr = (int**)malloc(sizeof(int*)*row);
	for (int i = 0; i < row; i++)
	{
		arr[i] = (int*)malloc(sizeof(int)* col);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("key\n");
	scanf("%d", &key);
	find(arr, row, col, key, &px, &py);
	printf("%d %d\n", px, py);
	system("pause");
	return 0;
}