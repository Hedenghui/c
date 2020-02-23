#include"List.h"

void testList()
{
	ListNode* list = ListCreate();
	ListPushback(list, 1);
	ListPushback(list, 2);
	ListPushback(list, 3);
	ListPushback(list, 4);
	ListPrintf(list);
	ListPushfront(list, 1);
	ListPushfront(list, 2);
	ListPushfront(list, 3);
	ListPushfront(list, 4);
	ListPrintf(list);
	ListPopback(list);
	ListPopback(list);
	ListPopback(list);
	ListPopback(list);
	ListPrintf(list);
	//ListPopfront(list);
	//ListPopfront(list);
	//ListPopfront(list);
	//ListPopfront(list);
	//ListPrintf(list);
	ListNode* ret = ListFind(list, 4);
	/*ListInsert(ret, 30);
	ListPrintf(list);*/
	ListErase(ret);
	ListPrintf(list);
	ListDestory(list);
}
int main()
{
	testList();
	system("pause");
	return 0;
}