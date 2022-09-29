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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int  n = q.size();
            
         
            vector<int> val;
            vector<TreeNode*> tr;
            for(int i=0;i<n;++i){
                auto t  = q.front();
                q.pop();
                val.push_back(t->val);
                tr.push_back(t);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            if(level%2==1){
                for(int i=0;i<n;++i){
                    tr[i]->val = val[n-i-1];
                }
            }
            level++;
        }
        return root;
    }
};