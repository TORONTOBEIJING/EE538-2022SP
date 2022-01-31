#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
double CPPLib::FindAverage(std::vector<int>&inputs){
  if (inputs.size()){
  double result = 0;
  for(auto n : inputs){
    result += n;
  }
  return result / (inputs.size());
}
    else return -1;
}
// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function.
    return "My name is Erchang Li"; 
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function. 
    std::vector<int> res;
    if (input.empty()){
    return res;
}
for (auto vec1 : input){
    if(vec1.empty()){
        continue;
    }
    else{
        for (auto vec2 : vec1){
            if (vec2.empty()){
                continue;
            }
            else{
                for (auto n : vec2){
                    res.push_back(n);
                }
            }
        }
    }
}
     return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    using namespace std;
    if(n < 0 )
            return -1;
    if(n >= 46)
            return -1;
    if ( n < 3) {
            return n;
    }

    int latterTWO = 1;
    int latterONE = 2;
    int result;

    for (int i = 3; i <= n; i++) {
        result = latterONE + latterTWO;
        latterTWO = latterONE;
        latterONE = result;
    }
    return result;
}
    //return 0;
//}
