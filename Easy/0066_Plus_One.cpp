// Problem: Plus One
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
      if (digits[i] < 9) {
        digits[i]++;
        return digits;
      }
      digits[i] = 0;
    }

    
    digits.insert(digits.begin(), 1);
    return digits;
  }
};

//    Algorithm
// 1- loop on the numbers from the last and check if the number is less than 9 or not.
// 2- if less than 9 increament it by one and return numbers
// 3- if not make it equal 0 
// 4- if all numbers are 9 insert one at fisrt