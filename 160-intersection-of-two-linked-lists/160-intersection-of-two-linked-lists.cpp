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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tHeadA=headA;
        ListNode* tHeadB = headB;
        
        while(tHeadA!=tHeadB){
            if(tHeadA==nullptr)tHeadA=headB;
            else tHeadA= tHeadA->next;
            if(tHeadB == nullptr )tHeadB = headA;
            else tHeadB = tHeadB->next;
        }
        return tHeadA;
    }
};