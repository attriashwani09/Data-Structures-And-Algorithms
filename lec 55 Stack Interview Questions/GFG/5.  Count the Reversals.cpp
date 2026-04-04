class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        int len = s.length() ;
        
        if( len&1 ){
            return -1;  // Invalid Case 
        } 
        
        
        stack<char> st ;
        
        
        for( int i=0 ; i<len ; i++ ){
            
            char ch = s[i] ;
            
            if( !st.empty()  && ch == '}'  && st.top() == '{' ){
                
                st.pop() ;
            } 
            else{
                st.push( ch ) ;
            }
        } 
        
        
        int a = 0 ;   // for opening brackets 
        int b = 0 ;   // closing brackets 
        
        
        while( !st.empty() ){
            
            if( st.top() == '{' ){
                a++ ;
            } 
            else{
                b++ ;
            } 
            
            st.pop() ;
        } 
        
        
        int ans = (a+1) / 2  + ( b + 1 ) / 2;
        
        return ans ; 
    }
};