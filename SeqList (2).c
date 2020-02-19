
#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListPrintf(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void checkSeqList(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a =(SLDateType*)realloc(ps->a, newcapacity*sizeof(SLDateType));
		ps->capacity = newcapacity;
	}
}
void SeqListPushfront(SeqList* ps, SLDateType x)
{
	assert(ps);
	checkSeqList(ps);
	size_t end = ps->size;
	while (end >0)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPushback(SeqList* ps, SLDateType x)
{
	assert(ps);
	checkSeqList(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopfront(SeqList* ps)
{
	assert(ps);
	size_t start = 0;
	while (start<ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
void SeqListPopback(SeqList* ps)
{
	assert(ps);
	ps->size--;
}
int SeqListFind(SeqList* ps, SLDateType x)
{
	for (size_t i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	checkSeqList(ps);
	size_t end = ps->size;
	while (end>pos)
	{
		ps->a[end] =ps->a[end-1] ;
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps && pos < ps->size);
	size_t begin = pos;
	while (begin < ps->size-1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}
