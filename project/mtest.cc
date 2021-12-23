#include <gtest/gtest.h>
#include"main.h"
using std::string;


class BracketTest : public ::testing::Test {
protected:
	void SetUp() {
		stack = new Stack(100);
	}
	void TearDown() {
		delete(stack);
        //delete(stack);
	}
    Stack *stack;
};

TEST_F(BracketTest, test1) {
    EXPECT_TRUE(brackets(stack, "(([])[])"));
}

TEST_F(BracketTest, test2) {
    EXPECT_TRUE(brackets(stack, "()()[]()[][]()"));
}

TEST_F(BracketTest, test3) {
    EXPECT_FALSE(brackets(stack, "([)]"));
}


int main(int argc, char * argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
}