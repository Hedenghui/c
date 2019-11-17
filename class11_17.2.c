//memcpy Ä£ÄâÊµÏÖ
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dst, const void*src, size_t num)
{
	assert(dst&&src);

	char*str_dst = (char*)dst;
	char*str_src = (char*)src;
	for (size_t i = 0; i < num; i++)
	{
		str_dst[i] = str_src[i];
	}
	return dst;
}
int main()
{
	int a1[10] = { 1, 2, 3, 4, 5 };
	int a2[10];
	my_memcpy(a2, a1,10*sizeof(int));
	printf("%d\n", a2[2]);
	system("pause");
	return 0;
}