//strlen ģ��ʵ��
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	//assert(str != NULL);���Դ���ָ�벻Ϊ��
	int len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return len;
}
int main()
{
	printf("%d\n", my_strlen("hello world"));
	system("pause");
	return 0;
}