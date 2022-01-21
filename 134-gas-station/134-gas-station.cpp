class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int start = 0;
        int currTank = gas[0] - cost[0];
        int total_tank = gas[0] - cost[0];
        for(int i = 1, size = gas.size();i < size;++i)
        {
            if(currTank < 0)
            {
                currTank = 0;
                start = i;
            }
            currTank += gas[i] - cost[i];
            total_tank += gas[i] - cost[i];
        }
        
        start = (total_tank < 0) ? -1 : start;
        return start;
    }
};