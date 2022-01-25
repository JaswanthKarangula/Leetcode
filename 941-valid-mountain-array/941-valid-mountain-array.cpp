class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<=2)return false;
        int count=0;
        if(arr[1]<arr[0])return false;
        for(int i=1;i<n;++i){
            if(arr[i]<arr[i-1] )count++;
            if(arr[i]==arr[i-1])return false;
            if(arr[i]>arr[i-1] && count>=1)return false;
        }
        if(count>=1)
        return true;
        return false;
    }
};