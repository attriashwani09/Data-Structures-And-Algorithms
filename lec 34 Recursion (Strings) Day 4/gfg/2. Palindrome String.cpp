class Solution { 
    
    bool palindrome(string &s , int st , int end){
        
        if( st > end )
        return true ;
        
        
        if( s[st] != s[end])
        return false ;
        
        st++;
        end -- ;
        
        return palindrome( s , st , end) ;
        
    }
  public:
    bool isPalindrome(string& s) {
        // code here
        
        int end = s.length() - 1;
        
        bool ans = palindrome( s , 0 , end ) ;
        
        return ans;
    }
};