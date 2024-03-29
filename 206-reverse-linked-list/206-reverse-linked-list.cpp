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
    ListNode* reverseList(ListNode* head) {
//          //recursive
        
//         if(head == nullptr || head->next ==nullptr)return head;
//         ListNode* nxt = head->next;
//         ListNode* revHead = reverseList(head->next);
//         if(nxt!=nullptr)nxt->next = head;
//         // Important 
//         //head->next=nullptr;
//         return revHead;
        
        ListNode* curr= head;
        ListNode* prev =nullptr;
        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr= nxt;
        }
        return prev;
        
        
    }
};