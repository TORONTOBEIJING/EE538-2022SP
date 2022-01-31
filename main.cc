#include <iostream>
#include<string>
#include<vector>
#include "src/lib/cpplib.h"

int main() {
  // Print Hello world!
  CPPLib s;
  //Q2:
  std::vector<int> inputs = {-1,-2,-3,-4};
  std::cout << s.FindAverage(inputs) << std::endl;

  //Q5:
  std::cout << s.PrintIntro() << std::endl;

  //Q6:
  std::vector<std::vector<std::vector<int>>> input ;
  input.resize(3);
  for (int i = 0;i < 3;i++){
    input[i].resize(3);
  }
  input[0][0] = {1,2};
  input[0][1] = {3,4};
  input[1][0] = {5};
  input[1][1] = {6};
  input[1][2] = {};
  input[2][0] = {7,8};
  std::vector<int> output = s.Flatten3DVector(input);
  std::cout <<"[";
  for(int i = 0;i < output.size();i++){
    if(i == output.size() - 1){
      std::cout << output[i];
      std::cout << "]" << std::endl;
    }
    else
  {
    std::cout << output[i] << ",";
  }
  }

  //Q7:
  int  n = 4;
  std::cout << s.climbStairs(n) << std::endl;
  return 0;
}