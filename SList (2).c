#include"SList.h"

void SListNodePrintf(SListNode* pList)
{
	SListNode* cur = pList;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SListNodePushback(SListNode **ppList, SLTDataType x)
{
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;
	if (*ppList == NULL)
	{
		*ppList = newNode;
	}
	else
	{
		SListNode* tail = *ppList;
		while (tail->next!= NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
void SListNodePushfront(SListNode **ppList, SLTDataType x)
{
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;
	newNode->next = *ppList;
	*ppList = newNode;
}
void SListNodePopback(SListNode **ppList)
{
	if (*ppList == NULL)
	{
		return *ppList;
	}
	else if ((*ppList)->next == NULL)
	{
		*ppList = NULL;
	}
	else
	{
		SListNode*prev = NULL;
		SListNode*tail = *ppList;
		while (tail->next!=NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}

}
void SListNodePopfront(SListNode **ppList)
{
	if (*ppList == NULL)
	{
		return *ppList;
	}
	else if ((*ppList)->next == NULL)
	{
		*ppList = NULL;
	}
	else
	{
		SListNode*tail = *ppList;
		(*ppList) = tail->next;
		free(tail);
	}
}
SListNode* SListFind(SListNode* pList, SLTDataType x)
{
	SListNode*cur = pList;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}
void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	SListNode*newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;
	newNode->next = pos->next;
	pos->next = newNode;
}
void SListErasaAfter(SListNode* pos)
{
	SListNode*next = pos->next;
	if (next != NULL)
	{
		pos->next = next->next;
	}
	free(next);
}
void SListDestory(SListNode** ppList)
{
	SListNode* cur = *ppList;
	while (cur)
	{
		SListNode*next = cur->next;
		free(cur);
		cur = next;
	}
	*ppList = NULL;
}
