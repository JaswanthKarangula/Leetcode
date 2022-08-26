/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
int siz=q.size();
            Node* prev=NULL;
            for(int i=0;i<siz;++i){
                 auto curr=q.front();
                q.pop();
                if(prev!=NULL)prev->next=curr;
                if(curr->left!=nullptr)q.push(curr->left);
                if(curr->right!=nullptr)q.push(curr->right);
                prev=curr;
            }
        }
        return root;
        
    }
};