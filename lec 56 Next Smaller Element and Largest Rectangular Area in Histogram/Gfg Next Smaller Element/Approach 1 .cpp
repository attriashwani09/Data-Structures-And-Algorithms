// Tc : 0 ( n^2) 
class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        
        vector<int> ans ; 
        
        int n = arr.size() ;
        
        for( int i=0 ; i< n ; i++ ){
            
            int element = -1 ;
            
            for( int j= i+1 ; j< n ; j++ ){
                
                if( arr[i] > arr[j] ){
                    
                    element = arr[j] ;
                    break ;
                }
            } 
            
            ans.push_back( element ) ;
        } 
        
        
        return ans ; 
    }
};