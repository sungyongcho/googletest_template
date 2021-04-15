#include "../src/lib/solution.hpp"
#include "gtest/gtest.h" // googletest 깔면 됨

TEST(HelloWorldShould, ReturnHelloWorld)
{
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "Hello World!";
  EXPECT_EQ(expected, actual);
}
