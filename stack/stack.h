//if not defined
#ifndef STACK_H
//if not defined, it will define STACK_H
#define STACK_H

#define TRUE 1

#define FALSE 0

struct Node
{
	int val;
	struct Node* next;
};

//This just made a boolean type. It's a modified int
typdef bool int

struct Node* head = 0;

void push(int);
int pop();
int peek();
bool isEmpty{};
struct Node* createNode(int, struct Node*);

//End define
#endif
