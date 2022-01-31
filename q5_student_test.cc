#include "src/lib/cpplib.h"

#include <map>
#include <vector>
#include <string>
#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, ReturnIntro) {
 CPPLib a;
 std::string act = a.PrintIntro();
 std::string exp = "My name is Erchang Li";
  EXPECT_EQ(exp, act);
}