// Problem: Valid perfect square
// Platform: LeetCode
// Difficulty: Easy
// Time: O(log(n))
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isPerfectSquare(int num)
  {
    if (num == 0)
      return true;
    int start = 1;
    int end = num;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      if (mid == (num / mid) && num % mid == 0)
      { // we search for mid * mid = num (Perfect square)
        return true;
      }
      else if(mid < num / mid){ // mid * mid < num
        start = mid +1;
      }
      else{ // mid * mid > num
        end = mid -1;
      }
    }
    return false; // not found
  }
};

// Algorithm:
// this is an basic binary search on answer
