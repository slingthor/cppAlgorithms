#include "pch.h"
#include "LinkedList.h"


LinkedList::LinkedList()
{
	head = nullptr;
}


LinkedList::~LinkedList()
{
}

auto LinkedList::push_front(int val) -> void
{
	auto newNode = new Node();
	newNode->Value = val;
	if(head != nullptr)
	{
		newNode->Next = head;
	}
	else
	{
		newNode->Next = nullptr;
	}
	head = newNode;

	count++;
}

auto LinkedList::operator[](int index) const -> Node*
{
	auto iter = head;
	for (int i = 0; i < index; i++)
	{
		iter = iter->Next;
	}
	return iter;
}

auto LinkedList::remove_at(int index) -> void
{
	if (index == 0)
	{
		if(head->Next == nullptr)
		{
			head = nullptr;
		}
		else
		{
			head = head->Next;
		}
	}

	const auto nodeBefore = operator[](index - 1);
	remove_after(nodeBefore);
	count--;
}

auto LinkedList::empty() const -> bool
{
	return count < 0;
}

auto LinkedList::reverse() -> void
{
	reverse_recurse(head);
}


auto LinkedList::remove_after(Node* node) -> void
{
	if(node->Next != nullptr)
	{
		node->Next = node->Next->Next;
	}
	else
	{
		node->Next = nullptr;
	}
}

auto LinkedList::reverse_node(Node* before, Node* after) -> void
{
	after->Next = before;
}

auto LinkedList::reverse_recurse(Node* node) -> void
{
	if(node ->Next != nullptr)
	{
  		reverse_recurse(node->Next);
		node->Next->Next = node;
	}
	else
	{
		head = node;
	}
}
