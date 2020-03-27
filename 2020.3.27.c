#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;

};


typedef struct ListNode Node;
struct ListNode* reverseList(struct ListNode* head)
{
	Node*cur = head;
	Node*newhead = NULL;
	while (cur)
	{
		Node*next = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = next;
	}
	return newhead;
}
int main()
{
	system("pause");
	return 0;
}