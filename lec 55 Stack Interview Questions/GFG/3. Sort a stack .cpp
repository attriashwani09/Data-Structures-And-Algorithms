class Solution { 
    
    void insertAtPosition( stack<int> &st , int element ){
        
        if( st.empty() || st.top() < element ){
            
            st.push( element ) ;
            return ;
        } 
        
        int top = st.top() ;
        st.pop() ;
        
        insertAtPosition( st , element ) ;
        
        st.push( top ) ;
        
    }
    
  public:
    void sortStack(stack<int> &st) {
        // code here
        
        if( st.empty() ){
            return ;
        } 
        
        
        int top = st.top() ;
        st.pop() ;
        
        sortStack( st ) ;
        
        insertAtPosition( st , top ) ;
    }
};
