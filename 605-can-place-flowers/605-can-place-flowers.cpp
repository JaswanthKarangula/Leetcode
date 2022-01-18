class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int c) {
        int n=f.size();
        int prev=0,next=0,count=0;
        int curr=f[0];
        for(int i=0;i<n;++i){
            
            if(i+1<n)next=f[i+1];
            else next=0;
            //cout<<prev<<"  "<<curr<<"   "<<next<<endl;
            if(prev==0 && next==0 && curr==0){
                count++;
                prev=1;
                curr=next;
            }
            else{
                prev=curr;
                curr=next;
            }
            //cout<<prev<<"  "<<curr<<"   "<<next<<endl;
        }
        return count>=c;
    }
};