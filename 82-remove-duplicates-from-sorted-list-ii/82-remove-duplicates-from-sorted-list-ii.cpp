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
        if(head==nullptr)return head;
        ListNode* curr=new ListNode(-1);
        curr->next=head;
        ListNode* tmp=curr;
        while(curr->next && curr->next->next){
            if(curr->next->val==curr->next->next->val){
                int v=curr->next->val;
                while(curr->next && curr->next->val==v){
                    curr->next=curr->next->next;
                }
                    
            }else{
                curr=curr->next;
            }
        }
        
        
        
        
        return tmp->next;;
    }
};