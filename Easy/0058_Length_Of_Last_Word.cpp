// Problem: Length of last word
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    if (s.length() == 1 && s[0] != ' ')
      return 1;
    if (s.length() == 0)
      return 0;
    int counter = 0;
    for (size_t i{s.length() - 1}; i >= 0; i--)
    {
      if (s[i] != ' ')
      {
        counter++;

        if ((i - 1) != -1)
        {
          if (s[i - 1] == ' ')
          {
            return counter;
          }
        }
        else{
           return counter;
        }
      }
    }
    return counter;
  }
};

//    Algorithm
// 1- loop on the string from the end 
// 2- until you find the first letter 
// 3- track the number of letter you will have until you reach the end of the string or find a space
