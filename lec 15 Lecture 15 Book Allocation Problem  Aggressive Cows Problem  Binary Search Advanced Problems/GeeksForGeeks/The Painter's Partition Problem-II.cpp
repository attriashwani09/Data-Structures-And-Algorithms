class Solution { 
    
    bool isPossible(vector<int> &arr , int mid , int k){
        
        int totalPainter = 1;
        int totalBoards =0;
        
        for( int i=0; i<arr.size(); i++){
            
            if( totalBoards + arr[i] <= mid){
                
                totalBoards += arr[i];
            } 
            else{
                
                totalPainter++;
                totalBoards = arr[i]; 
                
                if( totalPainter > k || arr[i] > mid){
                    return false;
                }
            }
        } 
        
        
        return true;
    }
  public:
    int minTime(vector<int>& arr, int k) {
        
        // Step 1 : Find the Range 
        
        int total = 0;
        
        for( int i=0 ; i < arr.size() ; i++){
            
            total += arr[i];
        } 
        
        
        // Step 2 : CHeck for the Possible Solutions 
        int ans = -1;
        int st = 0;
        int end = total;
        
        
        while( st <= end){
            
            int mid = st + (end - st) /2;
            
            if( isPossible( arr , mid , k)){
                
                ans = mid;
                end = mid -1;
            } 
            else{
                st = mid +1;
            }
        } 
        
        return ans;
    }
};