class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // Step 1 : find the transpose of matrix . 

       int n = matrix.size(); 

        for(int i=0; i<n; i++) {

            for(int j=i; j< n ; j++) {
                swap( matrix[i][j] , matrix[j][i]) ;
            }
        } 


        // step 2 : Reverse Each row ;
         for(int i=0; i< n ; i++) { 
            
            reverse( matrix[i].begin() , matrix[i].end());
        }
    }
};