class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int l=1;
        int h=m*n;
        while(l<h){
            int mid=l+(h-l)/2;
            int j=n;
            int count=0;
            for(int i=1;i<=m;++i){
                while(j>0 && mid<(i)*j)
                    j--;
                count+=j;
                
            }
            if(count<k){
                l=mid+1;
            }
            else{
                h=mid;
            }
            
            
        }
        return l;
    }
};