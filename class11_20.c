//�жϴ�С�˻�
#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	int i = 1;
	return (*(char*)&i);
}
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
int main()
{
	int ret = check_sys;
	if (ret == 1)
	{
		printf("С��\n");
	}
	else if(ret==0){
		printf("���\n");
	}
	else{
		printf("0\n");
	}
	system("pause");
	return 0;
}