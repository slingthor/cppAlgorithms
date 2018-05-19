#include "pch.h"
#include "Algos/Node.h"

TEST(TestCaseName, TestName) {
	auto node = Node();
	node.Next = new Node();
	node.Next->Value = 2;
  EXPECT_EQ(2, node.Next->Value);
 
}