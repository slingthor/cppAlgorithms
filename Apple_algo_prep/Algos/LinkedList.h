#pragma once
#include "Node.h"
class LinkedList
{
public:
	int count;
	Node *head;
	LinkedList();
	~LinkedList();

	auto push_front(int val) -> void;
	auto operator[] (int index) const ->Node*;
	auto remove_at(int index) -> void;
	auto empty() const -> bool;

	auto reverse() -> void;

private:
	static auto remove_after(Node* node) -> void;
	static auto reverse_node(Node* before, Node* after) -> void;
	auto reverse_recurse(Node* node) -> void;
};

