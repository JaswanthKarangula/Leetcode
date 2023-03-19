class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int z =0;
        while(num2){
            z+=num2&1;
            num2= num2>>1;
        }
        int t = num1;
        int z2 =0;
        while(num1){
            z2+=num1&1;
            num1= num1>>1;
        }
        int res=0;
        if(z2<z){
            res = t;
            z=z-z2;
            for(int i=0;i<32 && z>0;++i){
                if(!(t&(1<<i))){
                res = res|(1<<i);
                z--;
            }
            }
            return res;
        }
        
        for(int i=31;i>=0 && z>0 ;--i){
            if(t&(1<<i)){
                res = res|(1<<i);
                z--;
            }
        }
        return res;
    }
};