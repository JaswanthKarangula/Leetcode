class Solution {
public:
    int findMinimumTime(vector<vector<int>>& tasks) {
        vector<int> times(2000+1,0);
        for(auto& e: tasks){
            swap(e[0],e[1]);
        }
        sort(tasks.begin(),tasks.end());
        int n = tasks.size();
        for(int i =0;i<n;++i){
            auto task = tasks[i];
            int count =0;
            for(int j = task[1];j<=task[0];++j){
                if(times[j]==1)count++;
            }
            if(task[2]>count){
                count = task[2]-count;
                for(int j = task[0] ; count>0;){
                    if(times[j]==0){
                        times[j]=1;
                        count--;
                    }
                    j--;
                }
            }
        }
        int res=0;
        for(auto e: times){
            res+=e;
        }
        return res;
    }
};