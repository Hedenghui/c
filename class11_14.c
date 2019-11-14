//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.

//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA

//AABCD右旋一个字符得到DAABC
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}
// O(N)
void leftRotate2(char* arr, int k)
{
	int len = strlen(arr);
	k %= len;
	// [ 0 , k - 1]
	reverseString(arr, arr + k - 1);
	// [k , len - 1]
	reverseString(arr + k, arr + len - 1);
	// [ 0, len - 1]
	reverseString(arr, arr + len - 1);
}

int isRotate(char* dest, const char* src)
{
	int len = strlen(dest);
	while (len--)
	{
		leftRotate2(dest, 1);
		if (!strcmp(dest, src))
			return 1;
	}
	return 0;
}
int main()
{
	char dest[30];
	char src[30];
	scanf("%s", dest);
	scanf("%s", src);
	int ret = isRotate(dest, src);
	printf("%d\n", ret);
	system("pause");
	return 0;
}