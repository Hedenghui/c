//3��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	int k = 0;
	for (i = 1; i < 90; i++)
	{
		if (i % 10 == 9)
		{
			k++;
		}
	}
	for (i = 90; i < 100; i++){
		if (i / 10 == 9)
		{
			k++;
		}
	}
	printf("%d\n", k);
	system("pause");
	return 0;
}