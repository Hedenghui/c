#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
int main()
{
	int n=20;
	int total = n;
	int empty = n;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;

	}
	printf("%d", total);
	system("pause");
	return 0;
}