class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int res=0;
        int last=-1;
        for(int i=0;i<n;++i){
            
            if(seats[i]==0 && last==-1){
                res=max(res,i);
                //last=i;
            }
            if(seats[i]==1 ){
                if(last==-1)res=max(res,i);
                res=max(res,(i-last)/2);
                last=i;
            }
                     
                     
        }
                     return res=max(res,n-last-1);
        
    }
};