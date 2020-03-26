#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
typedef struct ListNode ListNode;
struct ListNode* removeElements(struct ListNode* head, int val){
	ListNode* prev = NULL, *cur = head;
	while (cur != NULL)
	{
		if (cur->val == val)
		{
			ListNode* next = cur->next;
			free(cur);
			// É¾³ı
			if (cur == head)
			{
				head = next;
			}
			else
			{
				prev->next = next;
			}

			cur = next;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}

	return head;
}
int main()
{
	system("pause");
	return 0;
}