#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void*dst, const void*src, size_t num)
{
	assert(src&&dst);
	char*str_dst = (char*)dst;
	char*str_src = (char*)src;
	if (dst < src)//ǰ���ã���ǰ����
	{
		for (size_t i = 0; i < num; i++)
		{
			str_dst[i] = str_src[i];
		}
	}
	else//�����ã��Ӻ���ǰ��
	{
		for (int i = num - 1; i >= 0; i--)
		{
			str_dst[i] = str_src[i];
		}
	}
	return dst;
}
int main()
{
	int a1[10] = { 1, 2, 3, 4, 5 };
	my_memmove(a1 + 3, a1, 5 * sizeof(int));
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", a1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}