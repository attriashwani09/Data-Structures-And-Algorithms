// Approach 1 :
class Solution { 

    string convertstr(string s){

        string ans = "" ; 
        int len = s.length() ;

        for(int i=0  ; i<len ; i++){

            if(s[i]>='A' && s[i] <= 'Z'){
                char ch = s[i] - 'A' + 'a' ;
                ans += ch ;
            } 

            if( (s[i]>='a' && s[i] <= 'z') || (s[i] >='0' && s[i] <= '9')){
                char ch = s[i] ;

                ans += ch;
            }
        }

        return ans;

    }
public:
    bool isPalindrome(string s) {
        
        string temp = convertstr(s);

        int st = 0;
        int end = temp.length() -1 ;        

        while(st <= end){

            if(temp[st] != temp[end]){
                return false;
            } 

            st++;
            end--;
        } 

        return true;
    }
}; 





// Approach 2 :

bool isAlphnum( char ch){
    if((ch>='0' && ch <='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    } 
    return false;
}

class Solution {
public:
    bool isPalindrome(string s) {
        int st=0,end=s.length()-1;
        while(st<=end){
            if(! isAlphnum(s[st])){
                st++;
                continue;
            } 
            if(! isAlphnum(s[end])){
                end--;
                continue;
            } 
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            } 
            st++;
            end--;


    
        }  
        return true;
    }    

    
};