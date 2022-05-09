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
    ListNode* deleteDuplicates(ListNode* head) {
        
//         if(head == NULL || head->next == NULL)  return head; // if there is no node or a single node then there's no question of duplicates.
//         ListNode* temp = head; // declaring a temp pointer
//         while(temp->next != NULL){
            
//             if(temp->val == temp->next->val){  
//                 ListNode *del_node = temp->next;
//                 temp->next = del_node->next;  /// removing the link between nodes
//                 delete del_node;
//             }
            
//             else    temp = temp->next; //keep moving if no duplicates
//         }
//         return head;
         if(head == NULL || head->next == NULL) return head;
    
         ListNode* newhead = deleteDuplicates(head->next);
        
         if(head->val == newhead->val)  return newhead;
         else{
             head->next = newhead;
             return head;
         }
    }
};