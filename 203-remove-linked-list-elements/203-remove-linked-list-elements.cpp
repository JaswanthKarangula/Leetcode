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
    ListNode* removeElements(ListNode* head, int val) {
        
        
        //Iterative
        // if(head==nullptr )return head;
        // ListNode* temp = new ListNode(-1);
        // temp->next = head;
        // ListNode* res= temp;
        // while(temp->next){
        //     if(temp->next->val == val)temp->next = temp->next->next;
        //     else temp=temp->next;
        // }
        // return res->next;
        
        
        
        // Recursive
        
        if(!head)return head;
        ListNode* res = removeElements(head->next,val);
        if(head->val == val)return res;
        head->next = res;
        return head;
        
        
        
    }
};