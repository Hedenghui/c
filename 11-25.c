#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*p1 = (int*)malloc(sizeof(int)* 10);
	/*free(p1);*/
	//int*p2 = calloc(10, sizeof(int));//��ʼ��Ϊ0
	//free(p2);
	int*p2 = (int*)realloc(p1, sizeof(int)* 20);
	printf("%p\n", p1);
	printf("%p\n", p2);
	//free(p1);realloc�Ѿ��ڲ�ɾ����p1
	//���Բ����ͷ��ˣ�����ٴ��ͷŻ����
	free(p2);
	system("pause");
	return 0;
}