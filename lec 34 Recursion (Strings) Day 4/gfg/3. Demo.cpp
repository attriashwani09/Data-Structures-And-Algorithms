class Solution {  

    bool isAlphaNumeric( char ch ){

        if( ch >='a' && ch <= 'z'  || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
            return true ;
        } 
        else{
            return false ;
        }
    }

    bool check(string s , int st , int end){

        // while non numeric st 
        while( !isAlphaNumeric( s [st]) ){
            st ++ ;
        } 

        // while non alphanumeric end 

        while( !isAlphaNumeric ( s[end] ) ){
            end -- ;
        }  

        // Base Case 

        
        if(st > end)
        return true ;


        // check condition 

        if( s[st] != s[end])
        return false ; 

        st ++ ;
        end -- ; 

        return check( s , st , end ) ;
    } 
public:
    bool isPalindrome(string s) { 

        return check( s , 0 , s.length() - 1);
        
    }
};