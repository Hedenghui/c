//�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
//ʾ�� 1:
//���� : 121
//��� : true
#include<stdio.h>
#include<stdlib.h>

bool isPalindrome(int x){
	if (x<0)
	{
		return false;
	}
	else
	{
		if (x<10)
		{
			return true;
		}
	}
	int tmp = x;
	long str = 0;
	while (x != 0)
	{
		str = str * 10 + x % 10;
		x = x / 10;
	}
	if (str == tmp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	system("pause");
	return 0;
}