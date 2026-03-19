// User function Template for C++
class Solution { 
    
    void reverse(string &s , int st , int end){ 
        
        // Base Case : 
        if( st > end )
        return ;
        
        // processing  
        swap(s[st] , s[end]);
        st++ ;
        end --;
        
        reverse(s , st , end);
        
    }
  public:
    string reverseString(string& s) {
        // code here
        
        int end = s.length() - 1;
        
        reverse( s , 0 , end ) ; 
        
        return s;
    }
};
