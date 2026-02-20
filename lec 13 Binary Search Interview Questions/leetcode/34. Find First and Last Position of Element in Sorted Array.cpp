class Solution { 

    // function to find first occ : here , we have used binay search
    int firstOcc(vector<int> &nums , int target){

        int ans = -1;
        int st=0;
        int end = nums.size() -1 ;

        while( st<=end ){
            
            int mid = st+ (end-st)/2;

            if(nums[mid]==target){
                ans=mid;
                end = mid -1;
            }  

            else if(nums[mid] > target){
                end = mid -1;
            } 
            else{
                st = mid +1;
            }
        } 

        return ans;
    } 


    // function : to find last occ.
    int lastOcc(vector<int> &nums , int target){

        int ans = -1;
        int st = 0;
        int end = nums.size() -1;

        while( st <= end ){

            int mid = st + (end - st)/2;

            if(nums[mid] == target){
                ans = mid ;
                st = mid + 1; // also search for any more occ RIGHT  side 
            } 
            else if( nums[mid] > target){
                end = mid -1;
            } 
            else {
                st = mid + 1;
            }
        } 

        return ans;

    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;

        int first = firstOcc(nums , target);
        int last = lastOcc(nums , target);

        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};