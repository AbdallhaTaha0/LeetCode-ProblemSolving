// Problem: Find the index for the first occurrence in a string
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n * m)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int strStr(string haystack, string needle)
  {
    if (needle.empty())
      return 0;
    if (needle.size() > haystack.size())
      return -1;
    int idx = -1;
    for (size_t i{}; i < haystack.length(); i++)
    {

      if (haystack[i] == needle[0])
      {
        idx = i;

        if (i + needle.length() > haystack.length())
        {
          idx = -1;
          continue;
        }

        for (size_t j = 0; j < needle.length(); j++)
        {
          if (haystack[i + j] != needle[j])
          {
            idx = -1;
            break;
          }
        }
        if (idx != -1)
          return idx;
      }
    }
    return -1;
  }
};

//    Algorithm
// 1- first we need to check where is the first char in haystack that equals first char in our needle
// 2- then loop on the needle to check if the haystack contains all the needle chars
// 3- if there is any char does not equal the char in the needle break and continue checking other chars 
// 4- if all chars exist in haystack then return the first i that appeared in