#include "pch.h"
#include "gtest/gtest.h"
#include "../Algos/LinkedList.h"

TEST(push_back, LinkedList) 
{
	auto linkedList = LinkedList();
	for(int i = 0; i < 10; i++)
	{
		linkedList.push_front(i);
	}
	auto lastNode = linkedList.operator[](1);
	EXPECT_EQ(lastNode->Value, 8);
}

TEST(remove_at, LinkedList)
{
	auto linkedList = LinkedList();
	for(int i = 0; i < 10; i++)
	{
		linkedList.push_front(i);
	}
	linkedList.remove_at(1);
	auto second = linkedList.operator[](1);
	EXPECT_EQ(second->Value, 7);
}

TEST(reverse, LinkedLIst)
{
	auto linkedList = LinkedList();
	for(int i = 0; i < 10; i++)
	{
		linkedList.push_front(i);
	}
	linkedList.reverse();
	auto first = linkedList.operator[](0);
	EXPECT_EQ(0, first->Value);
}