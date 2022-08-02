class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        
        
        // 10100001 
        // 01100011
        // 6 + 1 = 7 
        //sum of bits in two numbers 
        
        vector<int> a;
        set<int> s(nums.begin(),nums.end());
        for(auto e: s){
            a.push_back(e);
        }
        nums=a;
        
        // for(auto e: nums)cout<<e<<"  ";
        // cout<<endl;
        
        int n=nums.size();
        vector<int> count(n,0);
        for(int i=0;i<n;++i){
            for(int bit=0;bit<32;++bit){
                if(nums[i]&(1<<bit))count[i]++;
            }
            
        }
        
        // number of pairs whose sum>=k;
        sort(count.begin(),count.end());
        
        int low=0,high=n-1;
        long long  res=0;
        for(auto e: count){
            
            //cout<<e<<" ";
            if(e*2>=k)res++;
        }
        //cout<<endl;
        while(low<high){
            if(count[low]+count[high]<k){
                low++;
            }
            else{
                res+= 2ll*(high-low);
                high--;
            }
        }
        return res;
        
        
        
    }
};