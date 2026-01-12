class Solution {
public:
    int hammingWeight(int n) {
        
        int ans;

        while(n){

            if(n&1){
                ans++;
            } 

            n=n>>1;
        } 

        return ans;
    }
};