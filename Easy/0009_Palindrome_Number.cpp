// Problem: Palindrome number
// Platform: LeetCode
// Difficulty: Easy
// Time: O(log(n))
// Space: O(1) 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
      return false;

    int reversed = 0;

    while (x > reversed) {
      reversed = reversed * 10 + x % 10;
      x /= 10;
    }

    return x == reversed || x == reversed / 10;
  }
};

//    Algorithm
// 1- Reject negatives and trailing-zero numbers
// 2- Reverse digits until reversed ≥ remaining number
// even -> x == reversed
// odd -> x == reversed / 10