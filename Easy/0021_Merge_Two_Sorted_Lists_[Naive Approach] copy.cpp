// Problem: Merge two sorted lists
// Platform: LeetCode
// Difficulty: Easy
// Time: O((n+m) × log(n+m))
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
    
    vector<int> arr;
    while (list1 != nullptr)
    {
      arr.push_back(list1->val);
      list1 = list1->next;
    }
    while (list2 != nullptr)
    {
      arr.push_back(list2->val);
      list2 = list2->next;
    }
    sort(arr.begin(), arr.end());
    
    ListNode *Head = new ListNode(-1);
    ListNode *curr = Head;
    
    for (int i = 0; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }

    return Head->next;
  }
};

int main()
{

  Solution s;

  ListNode *List1 = new ListNode(1, new ListNode(2, new ListNode(4)));

  ListNode *List2 = new ListNode(1, new ListNode(3, new ListNode(4)));
  ListNode* merged = s.mergeTwoLists(List1, List2);

  while (merged != nullptr)
  {
    std::cout << merged->val << std::endl;
    merged = merged->next;
  }

  return 0;
}
//    Algorithm
// [Naive Approach] By Using Array
// The idea is to use an array to store all the node data from both linked lists, sort the array, and then construct the resultant sorted linked list from the array elements.