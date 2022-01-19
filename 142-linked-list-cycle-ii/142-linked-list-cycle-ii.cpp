/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr)return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        int flag=1;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                flag=0;
                break;
            }
        }
        if(flag)return nullptr;
        fast=head;
        while(true){
            if(slow==fast)return fast;
            slow=slow->next;
            ListNode* temp=fast;
            fast=fast->next;
            
        }
        return slow;
        
    }
};