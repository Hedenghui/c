//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
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
	//ret: �����������ֵ����ֵ������
	//ret: �ҵ�����һ��������ֵΪ1��λ��
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
		//ͨ��indexλ�Ķ�����ֵ������ֳ����飬 ÿ������һ�����ֵ�������һЩ
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