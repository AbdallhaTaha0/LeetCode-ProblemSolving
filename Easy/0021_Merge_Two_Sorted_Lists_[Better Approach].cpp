// Problem: Merge two sorted lists
// Platform: LeetCode
// Difficulty: Easy
// Time: O(n+m)
// Space: O(n+m)
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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode* Head;

    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;
    
    if(list1->val <= list2->val){
      Head = list1;
      Head->next = mergeTwoLists(list1->next , list2);
    }
    else{
      Head = list2;
      Head->next = mergeTwoLists(list1 , list2->next);
    }
    return Head;
  }
};

//    Algorithm
// [Better Approach] Using Recursive Merge
// The idea is to pick the smaller head node at each step and let recursion merge the remaining parts. if one list is empty, return the other; otherwise the smaller node becomes the next node in the merged list and its next is the recursive merge of the rest
// If head1 is null, return head2.
// If head2 is null, return head1.
// Compare head1.data and head2.data.
// If head1.data <= head2.data:
// => set head = head1
// => set head.next = merge(head1.next, head2)
// Else:
// => set head = head2
// => set head.next = merge(head1, head2.next)
// Return head.