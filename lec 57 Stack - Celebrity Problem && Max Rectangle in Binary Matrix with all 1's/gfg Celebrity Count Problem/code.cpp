class Solution { 
    
    bool knows( vector<vector<int>> &mat , int a , int b ){
        
        if( mat[a][b] == 1 ){
            return true ;
        } 
        
        return false ;
    }
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        
        stack<int> s ;
        
        int n = mat.size() ;
        
        // Push all the person into stack 
        for( int i=0 ; i< n ; i++ ){
            s.push(i) ;
        }  
        
        
        // we know that celebrity knows no one and everybody knows celebrity 
        
        while( s.size() > 1 ){
            
            int a = s.top() ;
            s.pop() ;
            
            int b = s.top() ;
            s.pop() ;
            
            
            if(  knows(mat , a , b)  ){
                
                // if a knows b it means a can not be ecelebrity , so push b 
                s.push( b ) ;
            } 
            else{
                // if a does not know b , means it is a potential candidate for celebrity 
                s.push( a ) ;
            }
        } 
        
        
        // Step 3 : now there is only 1 candidate in the stack that could possibly be a celebrity 
         int ans = s.top() ; 
         
         int zeroCount = 0 ;
         
         for( int i=0 ; i<mat.size() ; i++ ){
             
             if( mat[ans][i] == 0 ){
                 zeroCount ++ ;
             }
             
         } 
         
         
         if( zeroCount != n-1 )
            return -1 ;
            
        
        
        
        int oneCount = 0 ; 
        
        for( int i=0 ; i< n ; i++ ){
            
            if( mat[i][ans] == 1 ){
                oneCount++ ;
            }
        }
        
        
        if( oneCount != n )
        return -1 ;
        
        
        return ans ;
        
        
    }
};