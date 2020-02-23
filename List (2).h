#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}ListNode;

void ListPrintf(ListNode* phead);
void ListPushback(ListNode* phead, LTDataType x);
void ListPushfront(ListNode* phead, LTDataType x);
void ListPopback(ListNode* phead);
void ListPopfront(ListNode* phead);
ListNode* ListFind(ListNode* pList, LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);
void ListErase(ListNode* pos);
void ListDestory(ListNode* phead);

