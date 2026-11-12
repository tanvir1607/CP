/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = head;
        while (--k) left = left->next;

        ListNode* temp = left;
        while (temp->next)
        {
            temp = temp->next;
            right = right->next;
        }
        swap(left->val, right->val);
        return head;
    }
};