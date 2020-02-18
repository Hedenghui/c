#include"SeqList.h"

void SeqListInit(SeqList *ps)
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
	ps->size = ps->capacity = 0;
}
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ",ps->a[i]);
	}
	printf("\n");
}
void SeqListPushBack(SeqList* ps, SLDateType x)//β��
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (SLDateType*)realloc(ps->a,newcapacity*sizeof(SLDateType));
		//���ٸ�����*ÿ�����ݴ�С���������sizeof...��Խ����
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;//0 1 2 3 4 5 6 7 8 9 x  //ps->size=x
	ps->size++;
}
void SeqListPushFrout(SeqList* ps, SLDateType x)//ͷ��
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (SLDateType*)realloc(ps->a, newcapacity*sizeof(SLDateType));
		//���ٸ�����*ÿ�����ݴ�С���������sizeof...��Խ����
		ps->capacity = newcapacity;
	}
	size_t end = ps->size;//endָ��5�����λ��
	while (end>0)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[0] = x;
	++ps->size;
}
void SeqListPopFrout(SeqList* ps)//ͷɾ��
{
	assert(ps);
	size_t start = 0;               //       ps->size-1
	while (start < ps->size-1)//���� 1 2 3 4     5     ps->size
	{
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	--ps->size;
}
void SeqListPopBack(SeqList* ps)//βɾ��
{
	assert(ps);
	ps->size--;
}
int SeqListFind(SeqList*ps, SLDateType x)//˳������
{
	for (size_t i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return 1;
		}
	}
	return -1;
}
void SeqListInsert(SeqList*ps, size_t pos, SLDateType x)//˳�����posλ�ò���x
{
	assert(ps);
	assert(pos < ps->size);
	if (ps->size == ps->capacity)
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (SLDateType*)realloc(ps->a, newcapacity*sizeof(SLDateType));
		//���ٸ�����*ÿ�����ݴ�С���������sizeof...��Խ����
		ps->capacity = newcapacity;
	}
	int  end = ps->size - 1;
	while (end >=(int)pos)//pos��size_t �޷��ţ�����0λ�ü�ʱ����ѭ��
	{
		ps->a[end+1] = ps->a[end];
		--end;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, size_t pos)//˳���ɾ��posλ�õ�ֵ
{
	assert(ps&&pos<ps->size);
	size_t start = pos;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size--;
}