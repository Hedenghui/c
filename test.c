#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"
#include<stdio.h>

enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEA,
	MOD,
	SHOW,
	SORT,
};
void menu()
{
	printf("============== 0:exit    1:add     2:del==============\n");
	printf("============== 3:search   4:modify    5:show==============\n");
	printf("============== 6:sort   ==============\n");
}
void test()
{
	Contact ct;
	InitContact(&ct);
	AddContact(&ct);
	AddContact(&ct);
	AddContact(&ct);

	DelContact(&ct);

}
void testContact()
{
	Contact ct;
	int option;
	InitContact(&ct);

	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case EXIT:
			break;
		case ADD:
			AddContact(&ct);
			break;
		case DEL:
			DelContact(&ct);
			break;
		case SEA:
			SearchContact(&ct);
			break;
		case MOD:
			ModifyContact(&ct);
			break;
		case SHOW:
			ShowContact(&ct);
			break;
		case SORT:
			SortContact(&ct);
			break;
		default:
			printf("输入的选项有误！\n");
		}
	} while (option);
}
int main()
{
	testContact();
	system("pause");
	return 0;
}