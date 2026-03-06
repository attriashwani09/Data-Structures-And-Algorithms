class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) { 

        vector<int> ans;

        int count = 0;
        int rows = matrix.size() ;
        int cols = matrix[0].size() ; 

        int total = rows * cols;

        int stRow = 0;
        int stCol = 0;
        int endRow = rows -1 ;
        int endCol = cols-1 ;

        while( count < total) { 

            // 1st print stRow  
            
            for(int i=stCol; count<total && i<= endCol ; i++){
                ans.push_back(matrix[stRow][i]);
                count ++;
            } 
            stRow ++ ;

            // 2nd print endCol 
             
            for(int i= stRow; count<total && i<= endRow ; i++){
                ans.push_back(matrix[i][endCol]); 
                count ++;
            }  

            endCol --;

            // 3rd Print endRow 
            
            for(int i=endCol ; count<total && i>=stCol ; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            } 
            endRow --; 


            // 4th print stCol  
           
            for(int i=endRow ; count<total && i>=stRow ; i--){
                ans.push_back(matrix[i][stCol]);
                count++;
            } 
            stCol ++;
        } 


        return ans;

    }
};