class Solution {
  public:
    int countWays(int n) {
        // your code here 
        
        // if n is negative , means can not be move to any place , so retrhrn 0 
        
        if( n < 0 ) {
            return 0 ;
        } 
        
        
        if( n == 0 ){
            return 1;
        } 
        
        
        
        int ans = countWays( n - 1 ) + countWays( n - 2 ) ;
        
        return ans;
        
    }
};
