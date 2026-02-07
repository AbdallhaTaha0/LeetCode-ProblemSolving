// Problem: Merge sorted array
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    int i = m - 1;     
    int j = n - 1;    
    int k = m + n - 1; 

    while (i >= 0 && j >= 0)
    {
      if (nums1[i] > nums2[j])
      {
        nums1[k--] = nums1[i--];
      }
      else
      {
        nums1[k--] = nums2[j--];
      }
    }

    // If nums2 still has elements
    while (j >= 0)
    {
      nums1[k--] = nums2[j--];
    }
  }
};

// Algorithm
// 1. Set three pointers:
//    i = m - 1 (end of nums1)
//    j = n - 1 (end of nums2)
//    k = m + n - 1 (end of merged array)

// 2. While both arrays have elements:
//    - Place the larger of nums1[i] and nums2[j] at nums1[k]
//    - Move pointers accordingly

// 3. Copy remaining elements from nums2 if any
