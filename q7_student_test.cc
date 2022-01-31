#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q7_Student, ReturnIntro) {
  CPPLib b;
  int act = b.climbStairs(4);
  int exp = 5;
  EXPECT_EQ(exp, act);
}

TEST(Q7_Student_2, ReturnIntro) {
  CPPLib b;
  int act = b.climbStairs(-1);
  int exp = -1;
  EXPECT_EQ(exp, act);
}

TEST(Q7_Student_3, ReturnIntro) {
  CPPLib b;
  int act = b.climbStairs(46);
  int exp = -2;
  EXPECT_EQ(exp, act);
}

TEST(Q7_Student_4, ReturnIntro) {
  CPPLib b;
  int act = b.climbStairs(3);
  int exp = 3;
  EXPECT_EQ(exp, act);
}

TEST(Q7_Student_5, ReturnIntro) {
  CPPLib b;
  int act = b.climbStairs(0);
  int exp = 0;
  EXPECT_EQ(exp, act);
}