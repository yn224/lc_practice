#include <iostream>
#include <vector>
using namespace std;

// Runtime: 34.51 % - 376 ms
// Memory: 71.85 % - 10.2 MB
vector<int> twoSum_s1(vector<int>& nums, int target) {
  int accum;
  vector<int> res;
  for ( int i = 0; i < nums.size(); i++ ) {
    for ( int j = i+1; j < nums.size(); j++ ) {
      if ( nums[i] + nums[j] == target ) {
        res.push_back(i);
        res.push_back(j);
        return res;
      }
    }
  }
  return nums;
}

int main( void ) {
  return 0;
}