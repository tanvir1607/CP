// Solution - 01 - Two Pointers
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummy = new ListNode(-1, head);
        ListNode* left = dummy;
        ListNode* right = head;

        while (n > 0 && right)
        {
            right = right->next;
            n--;
        }

        while (right)
        {
            left = left->next;
            right = right->next;
        }
        left->next = left->next->next;
        return dummy->next;
    }
};





// Solution - 02
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
    int size(ListNode* head)
    {
        ListNode* temp = head;
        int size = 0;
        while (temp)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len = size(head) - n;
        ListNode* dummy = new ListNode(-1, head);
        ListNode* temp = dummy;
        while (len--) temp = temp->next;
        temp->next = temp->next->next;
        return dummy->next;
    }
};