/// 3. Longest Substring Without Repeating Characters
#include <iostream>
#include <string>

// Runtime: 13.09% - 80 ms
// Memory Usage: 8.87% - 19.1 MB
int lengthOfLongestSubstring(std::string s) {
  int res = 0;
  for ( int i = 0; i < s.length(); i++ ) {
    std::string accum;
    int len = 0;
    for ( int j = i; j < s.length(); j++ ) {
      if ( accum.find(s[j]) == std::string::npos ) {
        accum.push_back(s[j]);
        len += 1;
        if ( len > res ) {
          res = len;
        }
      }
      else {
        int junk = accum.empty();
        len = 0;
        break;
      }
    }
  }
  return res;
}

int main( void ) {
  return 0;
}