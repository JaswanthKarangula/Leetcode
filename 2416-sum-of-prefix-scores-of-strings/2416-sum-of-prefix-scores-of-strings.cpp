class Solution {
public:
    class Trie{
        public:
       Trie* child[26]; //(26,nullptr);
        int visited =0;
        
        
    };
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie* root = new Trie();
        for(auto word:words){
            Trie* curr =root;
            for(auto c:word){
                if(curr->child[c-'a']==nullptr){
                    curr->child[c-'a'] = new Trie();
                }
                
                    curr->child[c-'a']->visited+=1;
            
                curr=curr->child[c-'a'];
            }
        }
        
        vector<int> res;
        for(auto word:words){
            Trie* curr = root;
            int sum = 0;
            for (char& c: word) {
                sum += curr->child[c - 'a']->visited;
                curr = curr->child[c - 'a'];
            }
            res.push_back(sum);
            
        }
        return res;
    }
    
};