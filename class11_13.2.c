//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void leftRotate(char* arr, int k)
{
	k %= strlen(arr);
	while (k--)
	{
		//Ԫ���ƶ�
		int start = 0;
		int tmp = arr[start];
		while (arr[start + 1] != '\0')
		{
			arr[start] = arr[start + 1];
			++start;
		}
		arr[start] = tmp;
	}
}
int main()
{
    char arr[] = "ABCD";
	int k;
	scanf("%d", &k);
	printf("%s\n", arr);
	for (int i = 1; i <= k; ++i)
	{
		leftRotate(arr, i);
		printf("%s\n", arr);
	}
	system("pause");
	return 0;
}