// Problem: Search insert position
// Platform: LeetCode
// Difficulty: Easy
// Time: O(log(n))
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
      int mid = start + (end - start) / 2;

      if (nums[mid] == target)
        return mid;
      else if (nums[mid] < target)
        start = mid + 1;
      else
        end = mid - 1;
    }

    return start;
  }
};

//    Algorithm
// 1- simple binary search algorithm