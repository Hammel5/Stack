#include "Stack.h"

Stack::Stack()
{
	head = nullptr;
}

Stack::~Stack()
{
	while (!IsEmpty())
		Pop();
}

void Stack::Push(ItemType item_)
{
	if (!IsFull())
	{
		Node* temp = new Node;
		temp->next = head;
		temp->item = item_;
		head = temp;
	}
	else
		return;
}

void Stack::Pop()
{
	if (!IsEmpty())
	{
		Node* temp = head;
		head = head->next;

		delete temp;
	}
	else
		return;
}

ItemType Stack::Top()
{
	Node* copy = head;
	return copy->item;
	delete copy;
}

bool Stack::IsFull()
{
	Node* temp;
	try
	{
		temp = new Node;
		delete temp;
		return false;
	}
	catch (std::bad_alloc& exception)
	{
		return true;
	}
}

bool Stack::IsEmpty()
{
	if (head == nullptr)
		return true;

	else
		return false;
}
