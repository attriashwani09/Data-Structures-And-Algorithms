// Leetcode : 46. Permutations 
class Solution { 

    void solve(vector<int> &nums , int index , vector<vector<int>> &ans){

        // Base Case : 
        if( index >= nums.size() ){
            ans.push_back(nums) ;
            return ;
        } 

        // Processing 
        for( int i= index; i<nums.size() ; i++){
            
            // swap the elements 
            swap( nums[index] , nums[i]) ;
            solve( nums , index + 1 , ans ) ;

            // Backtrack :
            swap( nums[index] , nums[i]) ;
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int index = 0;

        solve( nums , index , ans) ;

        return ans; 
    }
};