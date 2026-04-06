
// Note : this approach will get TLE because this uses 0( n^2 ) Time . 

class Solution {
  public:
    int getMaxArea(vector<int> &heights) {
        // code here
        
        int area = -1 ; 

        int n = heights.size() ;

        for( int i=0 ; i< n ; i++ ){

            int len = heights[i] ; 

            int right = i ;
            int left = i ;

            while( left -1 >= 0 && heights[ left -1 ]  >= heights[i] ){
                left -- ;
            } 

            while( right+1 < n  && heights[right+1] >= heights[i] ){
                right ++ ;
            } 

            int width = right - left +1 ;

            int currArea = len * width ;
            if( area < currArea ){
                area = currArea ;
            }

        } 


        return area ;
        
    }
};