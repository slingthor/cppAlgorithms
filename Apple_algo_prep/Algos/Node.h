#pragma once

struct Node
{
	Node()
	{
		Value = 0;
		Next = nullptr;
	}

	int Value;
	Node *Next;
};