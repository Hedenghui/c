/*������ʵ��һ�� atoi ������ʹ���ܽ��ַ���ת����������

���ȣ��ú����������Ҫ�������õĿ�ͷ�ո��ַ���ֱ��Ѱ�ҵ���һ���ǿո���ַ�Ϊֹ��

������Ѱ�ҵ��ĵ�һ���ǿ��ַ�Ϊ�����߸���ʱ���򽫸÷�����֮���澡���ܶ���������������������Ϊ�������������ţ������һ���ǿ��ַ������֣���ֱ�ӽ�����֮�������������ַ�����������γ�������

���ַ���������Ч����������֮��Ҳ���ܻ���ڶ�����ַ�����Щ�ַ����Ա����ԣ����Ƕ��ں�����Ӧ�����Ӱ�졣

ע�⣺������ַ����еĵ�һ���ǿո��ַ�����һ����Ч�����ַ����ַ���Ϊ�ջ��ַ����������հ��ַ�ʱ������ĺ�������Ҫ����ת����

���κ�����£����������ܽ�����Ч��ת��ʱ���뷵�� 0*/

#include<stdio.h>
#include<stdlib.h>
int myAtoi(char*str)
{
	long ret = 0;
	int flag = 1;
	for (*str; *str == 32; str++);
	switch (*str)
	{
	case 45:
		flag = -1;
	case 43:
		str++;
	}
	if (*str<48 || *str>57)
	{
		return 0;
	}
	while (*str >= 48 && *str <= 57)
	{
		ret = ret * 10 + (*str - 48);
		if ((int)ret != ret)
		{
			return (flag == 1) ? INT_MAX : INT_MIN;
		}
		str++;
	}
	ret *= flag;
	return (int)ret;
}
int main()
{
	system("pause");
	return 0;
}