#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDatatype;
typedef struct Stack
{
	STDatatype* _a;
	int _top;
	int _capacity;
}Stack;

void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}
void StackPush(Stack* ps, STDatatype x)
{
	assert(ps);
	if (ps->_top == ps->_capacity)
	{
		int newcapacity = ps->_capacity == 0?4 : (ps->_capacity * 2);
		ps->_a = (STDatatype*)realloc(ps->_a, newcapacity*sizeof(STDatatype));
		ps->_capacity = newcapacity;
	}
	ps->_a[ps->_top] = x;
	ps->_top++;
}
void StackPop(Stack* ps)
{
	assert(ps&&ps->_top>0);
	ps->_top--;
}
STDatatype StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->_top;
}
int StackEmpty(Stack*ps)
{
	if (ps->_top == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_top = ps->_capacity = 0;
}
void teststack()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPop(&s);
	StackPop(&s);
	StackPop(&s);
	StackPop(&s);
	while (!StackEmpty(&s))
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}
	printf("\n");
	StackDestroy(&s);
}