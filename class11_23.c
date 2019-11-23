#include<stdio.h>
#include<stdlib.h>
union Un
{
	char c;
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un));
	union Un u;
	u.i = 1;//0x 00 00 00 01
	
	if (u.c == 1)
	{
		printf("Ð¡¶Ë\n");
	}
	else{
		printf("´ó¶Ë\n");
	}
	system("pause");
	return 0;
}