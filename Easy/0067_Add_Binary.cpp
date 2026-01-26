// Problem: Add binary
// Platform: LeetCode
// Difficulty: Easy
// Time: O(max(n, m))
// Space: O(max(n, m))
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string addBinary(string a, string b)
  {
    int c = 0;
    string result = "";
    
    for (int i=(a.length() - 1) ,j =(b.length() - 1); i >= 0 || j >= 0; i--,j--)
    {
      int n0 = (i >= 0) ? a[i] - '0' : 0;
      int n1 = (j >= 0) ? b[j] - '0' : 0;
      int sum = n0 + n1 + c;
      if(sum == 0){
        c = 0;
        result += '0';
      }
      else if(sum == 1){
        c = 0;
        result += '1';
      }
      else if(sum == 2){
        c = 1;
        result += '0';
      }else if(sum == 3){
        c = 1;
        result += '1';
      }
    }
    if(c == 1){
      result += '1';
    }
    reverse(result.begin() , result.end());
    return result;
  }
};

// Algorithm:
// 1. Initialize a variable `c` to 0 to store the carry.
// 2. Traverse both strings from the end using two indices.
// 3. At each step:
//    - If an index is out of bounds, treat its value as 0.
//    - Compute sum = current bit from `a` + current bit from `b` + carry.
// 4. Based on the sum:
//    - If sum == 0 → append '0', carry = 0
//    - If sum == 1 → append '1', carry = 0
//    - If sum == 2 → append '0', carry = 1
//    - If sum == 3 → append '1', carry = 1
// 5. After the loop, if a carry remains, append '1'.
// 6. Reverse the result string and return it.