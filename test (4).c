#include"SList.h"

void testSList()
{
	SListNode *pList = NULL;
	SListNodePushback(&pList, 1);
	SListNodePushback(&pList, 2);
	SListNodePushback(&pList, 3);
	SListNodePushback(&pList, 4);
	SListNodePrintf(pList);
	SListNodePushfront(&pList, 1);
	SListNodePushfront(&pList, 2);
	SListNodePushfront(&pList, 3);
	SListNodePushfront(&pList, 4);
	SListNodePrintf(pList);
	SListNodePopback(&pList);
	SListNodePopback(&pList);
	SListNodePopback(&pList);
	SListNodePopback(&pList);
	SListNodePrintf(pList);
	//SListNodePopfront(&pList);
	//SListNodePopfront(&pList);
	//SListNodePopfront(&pList);
	//SListNodePopfront(&pList);
	//SListNodePrintf(pList);
	SListNode*ret=SListFind(pList, 1);
	//SListInsertAfter(ret, 100);
	SListNodePrintf(pList);
	SListErasaAfter(ret);
	SListNodePrintf(pList);
	SListDestory(&pList);
	SListNodePrintf(pList);

}
int main()
{
	testSList();
	system("pause");
	return 0;
}