class Solution { 

    int getPivot(vector<int> &nums ){

        int st=0;
        int end = nums.size() -1;

        while( st < end){

            int mid = st + (end - st) / 2;

            if( nums[mid] >= nums[0] ){
                st = mid +1;
            } 
            else{
                end = mid;
            } 

        } 

        return st;
    } 


    int  BinarySearch(vector<int> &nums , int s , int e , int target){

        int st = s; 
        int end = e;

        while( st<= end) {

            int mid = st + (end - st) / 2;

            if ( nums[mid] == target ) {
                return mid ;
            } 
            else if( nums[mid] < target){
                st = mid +1;
            } 
            else{
                end = mid -1;
            }
        } 

        return -1;

     }
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size() ;
        // step 1 : find Pivot of the rotated array 

        int pivot = getPivot( nums ) ;

        // step 2 : analysis on which part of the of the array target lies , and apply binary search on that part  

        // edge case : not rotated array :
        if(pivot == 0){
            return BinarySearch( nums , 0 , n-1 , target);
        }
        // i) search in 1st part 
        if( nums[0] <= target && nums[pivot -1] >= target) {
            return BinarySearch( nums , 0 , pivot-1 , target); 
        } 
        else{ // ii ) search in 2nd part
            return BinarySearch(nums , pivot , n-1 , target );
        } 
    }
};