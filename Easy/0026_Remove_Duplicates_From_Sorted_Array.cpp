// Problem: Remove Duplicates From Sorted Array
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int* ptr = &nums[0];
        int k = 1;
        for(auto n : nums){
          if(*ptr != n){
            ptr++;
            *ptr = n;
            
            k++;
          }
        }
        return k;
    }
};

//    Algorithm
// 1- create a pointer at first element in my array
// 2- check if there is any number equal to it then move the pointer to the next distinct number
// 3- increase k by one (note: k is started from one because we assume that the first element is the first distinct number in our list )