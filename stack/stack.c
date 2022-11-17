#include "stdlib.h"

#include "stack.h"

struct Node* createNode(int val, struct Node* next)
{
	struct Node* tmp = malloc(sizeof(struct Node));
	tmp->val = val;
	tmp->next = next;
	return tmp;

}

bool isEmpty()
{
	return head == 0;
}
void push(int val)
{
	head = createNode(val, head);
}

int peek()
{
	if(!isEmpty())
		return head->val;
	return 0;
}

int pop()
{     
	struct Node* temp = head;
	int val;
	if(isEmpty()) return 0;
	val = head->val;	
	head = head->next;
	free(tmp);
	return val;		
}
