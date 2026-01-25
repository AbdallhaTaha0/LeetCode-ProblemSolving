// Problem: Valid Parentheses
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> p;
        if (s.empty())
            return false;
        for (char c : s)
        {

            if (c == '(' || c == '{' || c == '[')
            {
                p.push(c);
            }
            else
            {
                if(p.empty()) return false;

                // if we are here now that is mean c is a close bracket

                char top = p.top();
                p.pop();

                if (top == '(' && c != ')' || top == '[' && c != ']' || top == '{' && c != '}')
                {
                    return false;
                }
            }
        }

        return p.empty();
    }
};

//    Algorithm
// 1- to solve this problem we need to use stack
// 2- first we will save open parentheses inside our stack
// 3- until we have close parentheses we will compare the top of our stack if it is it's open one
// 4- if the stack is empty then we have done and the string is valid