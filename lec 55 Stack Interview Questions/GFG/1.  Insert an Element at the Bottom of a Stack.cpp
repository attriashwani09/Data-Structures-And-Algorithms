class Solution { 
    
    void insert( stack<int> &st , int x){
        
        if( st.empty() ){
            
            st.push( x ) ;
            return ;
        } 
        
        
        int num = st.top() ;
        
        st.pop() ;
        
       insert( st , x ) ;
        
        st.push( num ) ;
        
    }
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        
        insert( st , x ) ;
        
        return st ;
    }
};