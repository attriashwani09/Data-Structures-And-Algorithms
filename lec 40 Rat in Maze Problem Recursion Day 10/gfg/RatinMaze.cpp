class Solution {  
    // Check 3 conditions : if the cell is unvisited , if the cell is inside the block , if it is  a free cel 
    bool isSafe(vector<vector<int>> &maze , int x, int y , int n , vector<vector<int>> visited){
        
        if( (x >= 0 && x < n) && ( y >= 0 && y < n)  && visited[x][y] == 0  && maze[x][y] == 1 ){
            return true ;
        } 
        
        
        return false;
        
    }
    
    void solve(vector<vector<int>> &maze , int x , int y , int n , string path , vector<vector<int>> &visited , vector<string> &ans){
        
        // Base Case : Destination Reached 
        if( ( x == n-1 ) && (y == n-1 ) ){
            ans.push_back( path ) ;
            return ;
        } 
        
        
        // visited = true 
        visited[x][y] = 1;
        
        // We can move in 4 directions Down , Left , Right , Up  
        
        // Down 
        int newx = x+1 ;
        int newy = y ;
        
        // isSafe is a function to check wheater the cell is accesible or not 
        if( isSafe(maze , newx , newy , n , visited) ){
            
            path.push_back( 'D' ) ;
            solve( maze , newx , newy , n , path , visited , ans ) ;
            
            // Back Track 
            path.pop_back() ;
        }  
        
        
        // Left 
        newx = x;
        newy = y - 1 ;
        
        if( isSafe( maze , newx , newy , n , visited )){
            
            path.push_back( 'L' ) ;
            solve( maze , newx , newy , n , path , visited , ans) ;
            
            // Back Track 
            path.pop_back() ;
        } 
        
        
        // Right 
        newx = x ;
        newy = y+1 ;
        if( isSafe( maze , newx , newy , n , visited) ){
            
            path.push_back( 'R' ) ;
            solve(maze , newx , newy , n , path , visited , ans ) ;
            
            // Back track 
            path.pop_back() ;
        } 
        
        
        //Up 
        newx = x-1 ;
        newy = y;
        
        if( isSafe( maze , newx , newy , n , visited ) ){
            
            path.push_back( 'U' ) ;
            solve( maze , newx , newy , n , path , visited , ans) ;
            
            // Back track 
            path.pop_back() ;
        } 
        
        
        // After return mark the cell unvisited 
        
        visited[x][y] = 0 ;
        
        
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        vector<string> ans; 
        int n = maze.size() ;
        
        // can not start the movement 
        if( maze[0][0] == 0 ){
            return ans;
        } 
        
        // make a visited array to check if the block is visted or not 
        
        vector<vector<int>> visited = maze ;
        
        // mark  all paths univited with 0 
        for( int i=0; i<n; i++){
            
            for(int j=0; j<n ; j++ ){
                visited[i][j] = 0 ;
            }
        } 
        
        // source cordinates 
        int srcx = 0 ;
        int srcy = 0 ; 
        
        string path = "" ;
        
        solve(maze , srcx , srcy , n , path , visited , ans) ;
        
        return ans;
        
    }
};