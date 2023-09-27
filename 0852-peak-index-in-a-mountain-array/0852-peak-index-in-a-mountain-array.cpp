class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        
        // we could easly split the search space into half  basically by comparing the mid and next to mid elemnt we could find if the peak is in the right side or left side  of the mid;
        //  [0,1,2,3,4,5,6,7,8,10,6,5,4,3,2] 
        int l = 0, r = A.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (A[mid] < A[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};