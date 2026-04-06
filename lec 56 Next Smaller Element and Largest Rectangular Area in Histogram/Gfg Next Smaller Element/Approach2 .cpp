class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        
        int n= arr.size() ; 
        
        vector<int> ans(n) ;
        stack<int> s;
         
        
        s.push( -1 ) ;
        
        for( int i= n -1 ; i>=0 ; i-- ){ 
            
            int curr = arr[i] ;
            
            while( s.top() != -1 && s.top() >= arr[i] ){
                
                s.pop() ; 
            } 
            
            ans[i] = s.top() ;
            
            s.push( curr ) ;
        } 
        
        
        return ans ;
    }
};