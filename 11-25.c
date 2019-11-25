#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*p1 = (int*)malloc(sizeof(int)* 10);
	/*free(p1);*/
	//int*p2 = calloc(10, sizeof(int));//初始化为0
	//free(p2);
	int*p2 = (int*)realloc(p1, sizeof(int)* 20);
	printf("%p\n", p1);
	printf("%p\n", p2);
	//free(p1);realloc已经内部删除了p1
	//所以不用释放了，如果再次释放会出错；
	free(p2);
	system("pause");
	return 0;
}