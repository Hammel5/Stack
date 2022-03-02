#ifndef STACK_H
#define STACK_H

#include "ItemType.h"

struct Node
{
	ItemType item;
	Node* next;
};

class Stack
{
public:
	Stack(); // default constructor
	~Stack(); // destructor

	void Push(ItemType item_); // Add a new item on the stack
	void Pop(); // Removes the top item from the stack
	ItemType Top(); // Returns a copy of the top item from the stack
	bool IsFull(); // check to see if the stack is full
	bool IsEmpty(); // check to see if the stack is empty

private:
	Node* head; // postion of the top item in the stack
};

#endif // !STACK_H