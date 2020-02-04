//判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//示例 1:
//输入 : 121
//输出 : true
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