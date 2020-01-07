#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Menu(){
	printf("[1] crisps\n");
	printf("[2] popcorn\n");
	printf("[3] chocolate\n");
	printf("[4] cola\n");
	printf("[0] exit\n");
	int choice = 0;
	scanf("[%d]", &choice);
	return choice;
}

int main(){
	int choice = Menu();
	for (int i = 1; i <= 8; i++)
	{
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:printf("price = 3.0\n"); break;
		case 2:printf("price = 2.5\n"); break;
		case 3:printf("price = 4.0 \n"); break;
		case 4:printf("price = 3.5\n"); break;
		case 0:printf("thanks"); break;
		default:printf("price = 0\n"); break;
		}
		while (i > 5)
		{
			printf("thanks\n");
		}
	}
	system("pause");
	return 0;
}