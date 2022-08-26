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
        ListNode* currentNode = head;
        ListNode* leftNode = nullptr;
        ListNode* prevLeftNode = nullptr;
        
        for(int i=0;i<left-1;++i){
            prevLeftNode = currentNode;
            currentNode = currentNode->next;
        }
        leftNode = currentNode;
        
        int revPartLen = right - left +1;
        
        ListNode* prev = nullptr;
        for(int i=0;i<revPartLen;++i){
            ListNode* nxt = currentNode->next;
            currentNode->next = prev;
            prev = currentNode;
            currentNode = nxt;
        }
        
        if(prevLeftNode)prevLeftNode->next = prev;
        else head = prev;
        
        if(leftNode)leftNode->next = currentNode;
        else cout<<"LeftNode Should not be null";
        
        return head;
        
    }
};