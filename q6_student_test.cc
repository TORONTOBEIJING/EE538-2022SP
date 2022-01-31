#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student, ReturnIntro) {
  CPPLib v;
  std::vector<std::vector<std::vector<int>>> input = {{{1,2},{3,4}},{{5},{6},{}},{{7,8}}};
  std::vector<int> output = {1,2,3,4,5,6,7,8};
  EXPECT_EQ(v.Flatten3DVector(input),output);
}

TEST(Q6_Student_2, ReturnIntro) {
  CPPLib v;
  std::vector<std::vector<std::vector<int>>> input = {};
  std::vector<int> output = {};
  EXPECT_EQ(v.Flatten3DVector(input),output);
}

TEST(Q6_Student_3, ReturnIntro) {
  CPPLib v;
  std::vector<std::vector<std::vector<int>>> input = {{}};
  std::vector<int> output = {};
  EXPECT_EQ(v.Flatten3DVector(input),output);
}

TEST(Q6_Student_4, ReturnIntro) {
  CPPLib v;
  std::vector<std::vector<std::vector<int>>> input = {{{}}};
  std::vector<int> output = {};
  EXPECT_EQ(v.Flatten3DVector(input),output);
}
