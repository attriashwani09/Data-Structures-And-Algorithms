#include <bits/stdc++.h> 

 void solve(string s , int index , string output , vector<string> &ans){
        
        // Base case : 
        if( index >= s.length() ){
            
            if(output.length() >= 1 ){
                ans.push_back( output );
            } 
            return ; 
        }  
        
        
        // Exclude : 
        solve( s , index + 1 , output , ans ) ;
        
        // INclude : 
        output.push_back( s[index] ) ;
        solve( s , index+1 , output , ans ) ;
    }

vector<string> subsequences(string s){
	
	
        // Code here
        vector<string> ans;
        string output = "";
        int index = 0;
        solve( s , index , output , ans ) ;
        return ans;
	
}