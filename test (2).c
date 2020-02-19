#include"SeqList.h"

void TestSeqList()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushfront(&s, 1);
	SeqListPushfront(&s, 2);
	SeqListPushfront(&s, 3);
	SeqListPushback(&s, 1);
	SeqListPushback(&s, 2);
	SeqListPushback(&s, 3);
	SeqListPrintf(&s);
	SeqListPopfront(&s);
	SeqListPrintf(&s);
	SeqListPopback(&s);
	SeqListPrintf(&s);
	SeqListFind(&s, 5);
	SeqListInsert(&s, 2, 30);
	SeqListPrintf(&s);
	SeqListErase(&s, 2);
	SeqListPrintf(&s);

}
int main()
{
	TestSeqList();
	system("pause");
	return 0;
}