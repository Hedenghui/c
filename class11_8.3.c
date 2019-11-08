#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001  2^4+2^3+2^0
//��ת�󣺣�2550136832��
//10011000000000000000000000000000  2^31+2^28+2^27
//���������أ�
//2550136832
unsigned int reverse_bit(unsigned int val)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		ret += ((val >> i) & 1)*pow(2, 31 - i);
		//��i=0��
		//00000000000000000000000000011001
		//00000000000000000000000000000001
		//00000000000000000000000000000001
		//1*2^31+
		//......
		//1*2^31+0*2^30+0*2^29+1*2^28+1*2^27++++++
	}
	return ret;
}
int main()
{
	unsigned int val;
	scanf("%u", &val);
	printf("%u\n", reverse_bit(val));
	system("pause");
	return 0;
}