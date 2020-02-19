#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	size_t size;
	size_t capacity;
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);
void SeqListPrintf(SeqList* ps);
void checkSeqList(SeqList* ps);
void SeqListPushfront(SeqList* ps, SLDateType x);
void SeqListPushback(SeqList* ps, SLDateType x);
void SeqListPopfront(SeqList* ps);
void SeqListPopback(SeqList* ps);
int SeqListFind(SeqList* ps, SLDateType x);
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);
void SeqListErase(SeqList* ps, size_t pos);
