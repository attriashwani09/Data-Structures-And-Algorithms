// Leetcode 1752 :

// Approach :
// We can see that in a rotated sorted array only one pair is found that have arr[i-1] > arr[i] ;
// and in normal sorted array we know that arr[0] < arr[n-1]

// we can run a loop and check for above conditions. if the count is <=1 , iit means it is a rotated sorted array   or a normal sorted array . 

// if the count exceeds 1 then it is a non- sorted array .

class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count = 0;

        int n = nums.size() ;

        for(int i=1; i<n; i++) {

            if(nums[i-1] > nums[i])     
            count ++;

        } 

        if( nums[0] < nums[n-1])
        count ++;


        return count <=1;
    }
}; 

