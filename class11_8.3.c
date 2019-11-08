#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001  2^4+2^3+2^0
//翻转后：（2550136832）
//10011000000000000000000000000000  2^31+2^28+2^27
//程序结果返回：
//2550136832
unsigned int reverse_bit(unsigned int val)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; i++)
	{
		ret += ((val >> i) & 1)*pow(2, 31 - i);
		//当i=0；
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