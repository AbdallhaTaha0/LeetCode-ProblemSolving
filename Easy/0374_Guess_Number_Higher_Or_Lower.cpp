// Problem: Guess number higher or lower
// Platform: LeetCode
// Difficulty: Easy
// Time: O(log(n))
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

 int guess(int num){}

class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;
        
        while(start <= end){
          int mid = start +(end - start)/2;

          if(guess(mid) == 0){
            return mid;
          }
          else if(guess(mid) == 1){
            start = mid + 1;
          }else{
            end = mid - 1;
          }
        }
        return -1; // unreachable
    }
};


// Algorithm:
// this is an basic binary search on array
