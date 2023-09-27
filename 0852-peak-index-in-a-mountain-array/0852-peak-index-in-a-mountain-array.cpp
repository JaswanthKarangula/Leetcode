class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // given tow indices we can find of the first and last are we can say if the peak is in between or outside...
        //  [0,1,2,3,4,5,6,7,8,10,6,5,4,3,2] 
        int n = arr.size();
        int low =0;
        int high =n-1;
        int ans =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid]<arr[mid+1]){
                low = mid+1;
            }
            else{
                high = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};