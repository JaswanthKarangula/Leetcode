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
    bool isValidBST(TreeNode* root) {
        //inorder traversal iterative
        if (root == nullptr) return 1;
        TreeNode* pre=nullptr;
        stack<TreeNode*> st;
        while(root !=nullptr || !st.empty()){
            while(root!=nullptr){
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            if(pre!=nullptr){
                if(root->val<=pre->val)return 0;
            }
            pre=root;
            root=root->right;
        }
        return 1;
        
    }
};