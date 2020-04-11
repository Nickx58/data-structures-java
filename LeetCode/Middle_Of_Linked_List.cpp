/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * Given a non-empty, singly linked list with head node head, return a middle node of linked list.
 * If there are two middle nodes, return the second middle node.
 * 
 * 
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* A = head;
        ListNode* B = head;
        while(B != NULL) {
            B = B->next;
            if (B == NULL) {
                return A;
            }
            A = A->next;
            B = B->next;
        }
        return A;
    }
};
