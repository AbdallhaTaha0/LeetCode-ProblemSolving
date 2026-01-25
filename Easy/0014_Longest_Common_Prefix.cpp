// Problem: Longest Common Prefix
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    if(strs.empty())return "";
    string result = "";
    for (size_t i{}; i < strs[0].length(); i++)
    {
      bool isCommon = true;
      char c = strs[0][i];
      for(size_t j{}; j < strs.size(); j++){
        
          
        if(!(c == strs[j][i]) || (strs[j] == "")){
          isCommon = false;
          return result;
        }
       
      }
      if(isCommon){
        result += c;
      }
    }
    return result;
  }
};

//    Algorithm
// 1- save first letter from the first word
// 2- compare first letter with each first letter from other words in the list
// 3- if it is the same letter save it and move to the next letter
// 4- if no any common prefix just return empty string