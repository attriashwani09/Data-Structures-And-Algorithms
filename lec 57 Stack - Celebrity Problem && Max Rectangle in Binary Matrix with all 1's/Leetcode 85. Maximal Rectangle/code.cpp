class Solution { 

   vector<int> nextSmallerElement( vector<int> arr ){

        int n = arr.size() ;

        vector<int> ans(n) ;
        stack<int> s ;

        s.push( -1 ) ;

        for( int i = n-1 ; i >= 0 ; i-- ){

            while( s.top() != -1 && arr[s.top()] >= arr[i] ){
                s.pop() ;
            } 

            ans[i] = s.top() ;

            s.push( i ) ;
        }

        return ans ;
 
    } 

    vector<int> prevSmallerElement( vector<int> arr ){

        int n = arr.size() ;

        vector<int> ans(n) ;
        stack<int> s ; 

        s.push( -1 ) ;

        for( int i = 0 ; i< n ; i++ ){

            while( s.top() != -1 && arr[s.top()] >= arr[i] ){
                s.pop() ;
            } 

            ans[i] = s.top() ;

            s.push( i ) ;
            
        } 

        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size() ;

        vector<int> next(n) ;
        next = nextSmallerElement( heights ) ;

        vector<int> prev(n) ;
        prev = prevSmallerElement( heights ) ;

        int area = -1 ;  

        for( int i = 0 ; i< n ; i++ ){

            int len = heights[i] ;

            if( next[i] == -1 ){
                next[i] = n ;
            } 

            int width = next[i] - prev[i] - 1 ;  // width formula 

            int newArea = len * width ;

            area = max( area , newArea ) ;
        } 


        return area ;

        
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) { 

        int n = matrix.size() ;

        int m= matrix[0].size() ;

        vector<int> height(m , 0) ;

        // convert from char to array
        for( int i=0 ; i<m ; i++ ){

            height[i] = matrix[0][i] - '0' ;
        } 


        int area = largestRectangleArea( height ) ;

        for( int i=1 ; i<n ; i++ ){

            for( int j=0; j<m ; j++ ){

                if(matrix[i][j] == '1'){
                    height[j] ++ ;
                } 
                else{
                    height[j] = 0 ;
                }
            } 

            int newArea = largestRectangleArea( height ) ;

            area = max( area , newArea ) ;
        }
        
        return area ;
    }
};