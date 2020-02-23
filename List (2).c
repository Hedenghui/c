#include"List.h"

ListNode* ListCreate()
{
	ListNode*head = (ListNode*)malloc(sizeof(ListNode));
	head->next = head;
	head->prev = head;
	return head;
}

void ListPrintf(ListNode* phead)
{
	ListNode* cur = phead->next;
	while(cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPushback(ListNode* phead, LTDataType x)
{
	ListNode*newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	phead->prev->next = newnode;
	newnode->prev = phead->prev;
	newnode->next = phead;
	phead->prev = newnode;
}
void ListPushfront(ListNode* phead, LTDataType x)
{
	ListNode*newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}
void ListPopback(ListNode* phead)
{
	ListNode*prev = phead->prev->prev;
	ListNode*next = phead->prev;
	free(next);
	prev->next = phead;
	phead->prev = prev;
}
void ListPopfront(ListNode* phead)
{
	ListNode*prev = phead->next;
	ListNode*next = phead->next->next;
	free(prev);
	phead->next = next;
	next->prev = phead;
}
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode*newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	ListNode* first = pos->prev;
	first->next = newnode;
	newnode->prev = first;
	newnode->next = pos;
	pos->prev = newnode;
}
void ListErase(ListNode* pos)
{
	ListNode*first = pos->prev;
	ListNode*second = pos->next;
	free(pos);
	first->next = second;
	second->prev = first;
}
void ListDestory(ListNode* phead)
{
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}