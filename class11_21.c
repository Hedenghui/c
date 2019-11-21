#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端机\n");
	}
	else
	{
		printf("大端机\n");
	}
	system("pause");
	return 0;
}