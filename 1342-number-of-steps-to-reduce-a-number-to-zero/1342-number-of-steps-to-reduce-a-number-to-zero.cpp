class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num>1){
            if(num%2)count++;
            num=num/2;
            count++;
        }
        if(num)count++;
        return count;
    }
};