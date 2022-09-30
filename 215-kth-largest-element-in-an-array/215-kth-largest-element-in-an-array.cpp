class Solution {
public:
    int partition(int left,int right,vector<int>& nums){
        int pivot= nums[left];
        int l =left+1,r=right;
        while(l<=r){
            if(nums[l]<pivot && nums[r]>pivot) swap(nums[l++],nums[r--]);
            if(nums[l]>=pivot)l++;
            if(nums[r]<=pivot)r--;
        }
        swap(nums[left],nums[r]);
        return r;
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        
        // Using Heaps
        
//         priority_queue<int , vector<int>, greater<int> > pq;
//         for(auto num:nums){
//             pq.push(num);
//             if(pq.size()>k){
//                 pq.pop();
//             }
            
//         }
//          return pq.top();
        
        int left =0,right =nums.size()-1;
        int idx =0;
        while(1){
            idx= partition(left,right,nums);
            if(idx==k-1)break;
            else if(idx<k){
                left =idx+1;
            }
            else{
                right = idx-1;
            }
            
        }
        return nums[idx];
        
        
    }

};