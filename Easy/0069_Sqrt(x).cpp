// Problem: Sqrt(x)
// Platform: LeetCode
// Difficulty: Easy
// Time: O(log(n))
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int mySqrt(int x)
  {
    int start = 1;
    int end = x;
    int ans = 0;
    while (start <= end)
    {
      int mid = start + (end - start) / 2;
      if (mid ==  x / mid)
      {
        return mid;
      }
      else if(mid < x / mid){
        ans = mid;
        start = mid + 1;
      }
      else{
        end = mid - 1;
      }

    
    }
    return ans;
  }

};

// Algorithm:
// this is an basic binary search on answer
