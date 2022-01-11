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
    int sum=0;
    int sumRootToLeaf(TreeNode* root) {
        sum=0;
         help(root,0);
        return sum;
    }
    void help(TreeNode* root,int curr){
        if(!root)return ;
        curr=curr*2+root->val;
        if(root->left==nullptr && root->right==nullptr ){
            sum+=curr;
            return;
        }
        if(root->left)help(root->left,curr);
        if(root->right)help(root->right,curr);
        
    }
};