// Problem: Remove Duplicates From Sorted List
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n)
// Space: O(1)
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (!head) return head;
    ListNode* curr = head;
    while(curr->next != nullptr){
      if(curr->val == curr->next->val){
        curr->next = curr->next->next;
      }
      else{
        curr = curr->next;
      }
      
    }

    return head;
  }
};

// Algorithm
// 1- Loop through the linked list
// 2- Compare current node value with next node value
// 3- If equal, remove the next node by updating curr->next
//    (do NOT move curr)
// 4- If not equal, move curr to the next node
// 5- Return head