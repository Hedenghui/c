//1.输出j为多少？
//#include<stdio.h>
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i>0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//	system("pause");
//	return 0;
//}
//unsigned char 8位数据位，范围0 - 255，
//所以 - 2（11111110）时，溢出变成254；
//同理 - 1（11111111）时，溢出变成255；
//最后减到0时，不满足循环条件，for停止。
//刚好173次。
//7 4 1 == > 共(7 - 1) / 3 + 1 = 3次（1 - 3 = -2，即254，继续循环）
//254 251 ... 5 2 == > 共(254 - 2) / 3 + 1 = 85次（2 - 3 = -1，即255，继续循环）
//255 252 ... 6 3 == > 共(255 - 3) / 3 + 1 = 85次（3 - 3 = 0，退出循环）
//所以总共173次




//以下程序运行时，若输入1abcedf2df<回车>输出结果是？
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a = 0, ch;
	while ((ch = getchar()) != '\n')
	{
		if (a % 2 != 0 && (ch >= 'a' &&ch <= 'z'))
			ch = ch - 'a' + 'A';
		a++;
		putchar(ch);
	}
	printf("\n");
	system("pause");
	return 0;
}