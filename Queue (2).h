#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int QDataType;
typedef struct QueueNode
{
	QDataType _data;
	struct QueueNode* _next;
}QueueNode;

typedef struct Queue
{
	QueueNode* _front;
	QueueNode* _back;
}Queue;

void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_back = NULL;
}
void QueuePush(Queue* q, QDataType x)
{
	assert(q);
	QueueNode*newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->_data = x;
	newnode->_next = NULL;
	if (q->_back== NULL)
	{
		q->_back = q->_front = newnode;
	}
	else
	{
		q->_back->_next = newnode;
		q->_back = newnode;
	}
}
void QueuePop(Queue* q)
{
	assert(q);
	if (q->_front->_next == NULL)
	{
		q->_front = q->_back = NULL;
	}
	else
	{
		QueueNode*cur = q->_front->_next;
		free(q->_front);
		q->_front = cur;
	}
}
QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_data;
}
QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_back->_data;
}
int QueueSize(Queue* q)
{
	assert(q);
	QueueNode*cur = q->_front;
	int n = 0;
	while (cur)
	{
		n++;
		cur = cur->_next;
	}
	return n;
}
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL ? 1 : 0;
}
void QueueDestory(Queue* q)
{
	assert(q);
	QueueNode*cur = q->_front;
	while (cur)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_front = q->_back = NULL;
}


