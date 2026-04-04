class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        
        stack<char> st ;
        
        for( int i=0; i<s.length() ; i++ ){
            
            char ch = s[i] ;
            
            // if '(' or operators push in stack 
            
            if( ch == '('  || ch == '+' || ch == '-' || ch == '*' || ch == '/' ){
                
                st.push( ch ) ;
            }  
            else{
                
                if( ch == ')' ){ 
                    
                    bool isRedundant = true ;
                    
                    while( st.top() != '(' ){
                        
                        char top = st.top() ;
                        
                        if( top == '+' || top == '-' || top == '*' || top == '/' ){
                            
                            isRedundant = false ;
                        } 
                        
                        st.pop() ;
                        
                    } 
                    
                    if( isRedundant == true )
                    return true ; 
                    
                    st.pop() ; // for '(' breacket
                    
                }
                
            }
            
            
        } 
        
        return false ;
    }
};
