// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, ReturnIntro) {
  CPPLib cpplib;
  std::vector<int> inputs = {};
  EXPECT_EQ(cpplib.FindAverage(inputs), -1);
}

TEST(Q2_Student_2, ReturnIntro) {
  CPPLib cpplib;
  std::vector<int> inputs = {-1,-1,-1,-1};
  EXPECT_EQ(cpplib.FindAverage(inputs), -1);
}

TEST(Q2_Student_3, ReturnIntro) {
  CPPLib cpplib;
  std::vector<int> inputs = {1,2,3,4,5,6};
  EXPECT_EQ(cpplib.FindAverage(inputs), 3.5);
}