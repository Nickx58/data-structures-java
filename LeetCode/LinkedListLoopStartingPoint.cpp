/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode *detectCycle(ListNode *head)
  {
    if (not head || not head->next)
      return NULL;
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast && fast->next)
    {
      fast = fast->next->next;
      slow = slow->next;
      if (slow == fast)
        break;
    }
    if (slow != fast)
      return nullptr;
    slow = head;
    while (slow != fast)
    {
      slow = slow->next;
      fast = fast->next;
    }
    return slow;
  }
};