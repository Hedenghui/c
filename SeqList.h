#pragma once//��֤ͷ�ļ�ֻ������һ��
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType *a;//ָ��һ������
	size_t size;//size_t == unsigned int//��������ж��ٸ���Ч����
	size_t capacity;//����
}SeqList;
//�����ݵĹ���  ��ɾ���
void SeqListInit(SeqList *ps);
void SeqListDestory(SeqList *ps);
void SeqListPrint(SeqList* ps);//��ӡ
void SeqListPushBack(SeqList* ps,SLDateType x);//β��
void SeqListPushFrout(SeqList* ps,SLDateType x);//ͷ��
void SeqListPopFrout(SeqList* ps);//ͷɾ
void SeqListPopBack(SeqList* ps);//βɾ
int SeqListFind(SeqList*psl, SLDateType x);//˳������
void SeqListInsert(SeqList*psl, size_t pos, SLDateType x);//˳�����posλ�ò���x
void SeqListErase(SeqList* psl, size_t pos);//˳���ɾ��