class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here 
        
        
        vector<int > arr ;
        
        // step 1 : store all the elements in arr 
       
        
        while( !st.empty() ){
            
            int num = st.top() ;
            st.pop() ;
            
            arr.push_back( num ); 
            
        } 
        
        
        // Step 2 : Push these values again in stack
        
        int size = arr.size() ; 
        
        
        for( int i=0; i< size ; i++ ){
            
            int num = arr[i] ;
            st.push( num ) ;
        }
        
        return ;
    }
};