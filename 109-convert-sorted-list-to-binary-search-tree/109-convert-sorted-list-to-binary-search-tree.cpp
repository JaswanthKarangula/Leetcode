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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    ListNode* currNode ;
    int lenOfList(ListNode* head){
        int len =0;
        while(head){
            head = head -> next;
            len++;
        }
        return len;
        
    }
    
    TreeNode* listToBSTHelper(int left, int right){
        if(left>right )return nullptr;
        int mid = left +(right-left)/2;
        TreeNode* l= listToBSTHelper(left,mid-1);
        TreeNode* root = new TreeNode(currNode->val);
        root->left = l;
        currNode= currNode->next;
        TreeNode* r = listToBSTHelper(mid+1,right);
        root->right = r;
        return root;
        
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        int listLen = lenOfList(head);
        currNode = head;
        return listToBSTHelper(0,listLen-1);
        
    }
    
};