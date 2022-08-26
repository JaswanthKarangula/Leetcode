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
        
        
       //  With Extre Space O(N);
//         queue<Node*> q;
//         q.push(root);
//         while(!q.empty()){
// int siz=q.size();
//             Node* prev=NULL;
//             for(int i=0;i<siz;++i){
//                  auto curr=q.front();
//                 q.pop();
//                 if(prev!=NULL)prev->next=curr;
//                 if(curr->left!=nullptr)q.push(curr->left);
//                 if(curr->right!=nullptr)q.push(curr->right);
//                 prev=curr;
//             }
//         }
//         return root;
        
        
        // without extra space;
        
        Node* currParent =root;
        Node* baseChild, *currChild, *nextChild;
        
        while(currParent){
            
            //move the parent to the first location which has a child
            
            while(currParent->next && !currParent->left && !currParent->right)currParent= currParent->next;
            // mark the base child;
            currChild = baseChild =  currParent->left ?currParent->left:currParent->right;
            while(currChild){
                if( currParent->right &&  (currChild!= currParent->right) ){
                    nextChild = currParent->right;
                }
                else{
                    //move the parent to the first location which has a child
                    currParent = currParent->next;
                    while (currParent && !currParent->left && !currParent->right) currParent = currParent->next; 
                    nextChild = currParent ? currParent->left?currParent->left:currParent->right : currParent;
                }
                currChild->next = nextChild;
                currChild = nextChild;
            }
            currParent = baseChild;
            
            
        }
        return root;
        
    }
};