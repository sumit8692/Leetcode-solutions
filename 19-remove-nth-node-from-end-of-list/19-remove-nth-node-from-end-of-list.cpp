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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dum = new ListNode();
        dum->next = head;
        ListNode *first = dum;
        ListNode *second = dum;
        
        for(int i = 0; i < n; i++)
            first = first->next;
        
        while(first->next != NULL){
            first = first->next;
            second = second->next;
        }
        
        second->next = second->next->next;
        return dum->next;
        
    }
};