#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;

void SListNodePrintf(SListNode* pList);
void SListNodePushback(SListNode **ppList, SLTDataType x);
void SListNodePushfront(SListNode **ppList, SLTDataType x);
void SListNodePopback(SListNode **ppList);
void SListNodePopfront(SListNode **ppList);
SListNode* SListFind(SListNode* pList, SLTDataType x);
void SListInsertAfter(SListNode* pos, SLTDataType x);
void SListErasaAfter(SListNode* pos);
void SListDestory(SListNode** ppList);
