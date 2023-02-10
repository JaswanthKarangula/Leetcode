class NumArray {
public:
    
    int t[400000] ={0};
    vector<int> nums;
    int n;
    void build(int index,int l,int r){
        if(l==r){
            t[index]=nums[l];
            return ;
            
        }
        int mid = (l+r)/2;
        build(index*2,l,mid);
        build(index*2+1,mid+1,r);
        t[index]=t[2*index]+t[2*index+1];
    }
    
    void update(int index,int l,int r, int pos,int val){
        if(pos<l||pos>r)return ;
        if(l==r){
            t[index]=val;
            nums[l]=val;
            return ;
            
        }
        int mid = (l+r)/2;
        update(index*2,l,mid,pos,val);
        update(index*2+1,mid+1,r,pos,val);
        t[index]=t[2*index]+t[2*index+1];
    }
    
    
    int query(int index,int l,int r,int lq,int rq){
        if(l>rq || lq>r )return 0;
        if(lq<=l && r<=rq) return t[index];
        
        int mid = (l+r)/2;
        return query(index*2,l,mid,lq,rq)+query(index*2+1,mid+1,r,lq,rq);
        
    }
        
        
    NumArray(vector<int>& a) {
        n=a.size();
        this->nums =a;
        build(1,0,a.size()-1);
    }
    
    void update(int index, int val) {
//         for(int i=0;i<n;++i)cout<<nums[i]<<" ";
//         cout<<endl;
        
        update(1,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        // for(int i=0;i<n;++i)cout<<nums[i]<<" ";
        // cout<<endl;
        return query(1,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */