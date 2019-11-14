//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.

//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA

//AABCD����һ���ַ��õ�DAABC
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