#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//{1,2,3,1,2}
//0001
//0010
//0011
//0001
//0010
//��Ӧλ�������Ľ���� ������1��1
//                       ż����1��0
int main()
{
	int* a;
	int num;
	scanf("%d", &num);
	a = (int*)malloc(sizeof(int)* num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	int ret = a[0];
	for (int i = 1; i < num; i++)
	{
		ret ^= a[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}