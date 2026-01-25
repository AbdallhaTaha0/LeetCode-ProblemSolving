// Problem: Roman To Integer
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int romanToInt(string s)
  {
   
    
    int sum = 0;

    for (size_t i{}; i < 15; i++)
    {

      if (s[i] == 'I')
      {
        if(s[i + 1] == 'V'){
          sum += 4;
          i++;
          continue;
        }
        else if(s[i + 1] == 'X'){
          sum += 9;
          i++;
          continue;
        }
        sum += 1;
      }
      else if (s[i] == 'V')
      {
        sum += 5;
      }
      else if (s[i] == 'X')
      {
        if(s[i + 1] == 'L'){
          sum += 40;
          i++;
          continue;
        }
        else if(s[i + 1] == 'C'){
          sum += 90;
          i++;
          continue;
        }
        sum += 10;
      }
      else if (s[i] == 'L')
      {
        sum += 50;
      }
      else if (s[i] == 'C')
      {
        if(s[i + 1] == 'D'){
          sum += 400;
          i = i + 1;
          continue;
        }
        else if(s[i + 1] == 'M'){
          sum += 900;
          i = i + 1;
          continue;
        }
        sum += 100;
      }
      else if (s[i] == 'D')
      {
        sum += 500;
      }
      else if (s[i] == 'M')
      {
        sum += 1000;
      }
    }
    return sum;
  }
};

int main(){

  Solution s;
  

  std::cout << s.romanToInt("MCMXCIV") << std::endl;
  return 0;
}

// Algorithm
// 1- ask for input
// 2- put it inside array of chars as the string order from left to right
// 3- loop on the array and sum the value of each Symbol in roman letters
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// 4- if I came before V and X add 4 and move to the next symbol
// 5- if X came before L and C add 40 and move to the next symbol
// 6- if C came before D and M add 4 and move to the next symbol
// 7- return the sum