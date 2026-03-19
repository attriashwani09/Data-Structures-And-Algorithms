class Solution {  

    bool isAlphaNumeric( char ch ){

        if( (ch >='a' && ch <= 'z')  || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
            return true ;
        } 
        else{
            return false ;
        }
    } 

    char lowerCase( char ch){

        if( ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a' ;
        } 

        return ch;
    }

    bool check(string &s , int st , int end){

        // while non numeric st 
        while( st <= end && isAlphaNumeric(  s[st]) == false ){
            st ++ ;
        } 

        // while non alphanumeric end 

        while(  st <= end &&  isAlphaNumeric( s[end] ) == false ){
            end -- ;
        }  

        // Base Case 

        
        if(st > end)
        return true ;


        // check condition 

        if( lowerCase(s[st] ) != lowerCase( s[end]) )
        return false ;

        st ++ ;
        end -- ; 

        return check( s , st , end ) ;
    } 
public:
    bool isPalindrome(string s) {  

        if( s.length() <= 1){
            return true ;
        }

        return check( s , 0 , s.length() - 1);
        
    }
};