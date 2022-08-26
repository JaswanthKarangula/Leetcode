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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr = head;
        ListNode* prev_l = nullptr;
        ListNode* t_l = nullptr;
        for(int i=0;i<left-1;++i){
            prev_l=curr;
            curr=curr->next; 
            
        }
        
        t_l=curr;
        int len = right-left+1;
        
        ListNode* prev = nullptr;
        
        
        // rev nodes
        for(int i=0;i<len;++i){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;   
        }
       
        if(prev_l) prev_l->next = prev;
        else head =prev;
        
        t_l->next = curr;
        
        return head;
        
        
        
        
        
        
    }
};