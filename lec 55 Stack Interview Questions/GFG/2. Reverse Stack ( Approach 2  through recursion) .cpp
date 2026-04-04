class Solution { 
    
    void insertAtBottom( stack<int> &st , int x ){
        
        if( st.empty() ){
            
            st.push( x ) ;
            return ;
        } 
        
        
        int top = st.top() ;
        st.pop() ;
        
        insertAtBottom( st , x ) ;
        
        // Backtracking  
        st.push( top ) ;
        
    }
  public:
    void reverseStack(stack<int> &st) {
        // code here 
        
        if( st.empty() ){
            return ;
        } 
        
        
        int top = st.top() ;
        st.pop() ;
        
        reverseStack( st ) ;
        
        // Insert at  the bottom of the stack 
        insertAtBottom( st , top ) ;
        
        
    }
};