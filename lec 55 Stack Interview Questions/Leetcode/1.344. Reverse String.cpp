class Solution {
public:
    void reverseString(vector<char>& s) {
        
        // with the help of stack 
        stack<char> st;

        for( int i= 0 ; i< s.size() ; i++){

            st.push( s[i] ) ;
        } 

        int i = 0 ;
        while( !st.empty() ){

            char ch = st.top() ;
            s[i] = ch ;
            st.pop() ;
            i++;
        }
    }
};