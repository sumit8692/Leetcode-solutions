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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0);
        
        ListNode* ltnext = left;
        ListNode* rtnext = right;
        
        while(head){
            
            if(head -> val < x){
                ltnext -> next = head;
                ltnext = ltnext->next; 
            }
            
            else{
                rtnext -> next = head;
                rtnext = rtnext -> next;
            }
            
            head = head -> next;
            
        }
        ltnext -> next = right -> next;
        rtnext -> next = NULL;
        
        return left -> next;
    }
};