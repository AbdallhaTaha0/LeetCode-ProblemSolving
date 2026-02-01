// Problem: Climbing stairs
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int climbStairs(int n)
  {
    if (n <= 2) return n;
    int first = 1;
    int second = 2;
    for (int i{2}; i < n ; i++) // 3 4 5 6
    {
      int next = first + second;
      first = second;
      second = next;  
      
    }

    return  second;
  }
};
// Algorithm:
// 1- check if the steps is less than 2 return steps
// 2- loop from iteration number 2 and calculate next with every iteration
// 3- assign first = second and second = next with  every iteration
// 4- then return second
