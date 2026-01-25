// Problem: Remove Element
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    if(nums.empty())return 0;
    int *ptr = &nums[0];
    int k = 0;
    for (size_t i{}; i < nums.size(); i++)
    {
      if(nums[i] != val){
        *ptr = nums[i];
        ptr++;
        k++;
      }
    }
    return k;
  }
};

//    Algorithm
// 1- create a pointer to reference first element in my numbers list
// 2- loop on my array and check if the current number is not equal to the val
// 3- reassign pointer value to the current number then move it to the next address and increase my k
