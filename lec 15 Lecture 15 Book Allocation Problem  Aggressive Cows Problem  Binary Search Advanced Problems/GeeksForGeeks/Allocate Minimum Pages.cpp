class Solution { 
    
    bool isPossible(vector<int> &arr,int mid ,  int k){
     
     int StudentCount = 1;
     int totalPages = 0;
     
     
     for (int i=0; i<arr.size() ; i++){
         
         if( totalPages + arr[i] <=mid){
             
             totalPages = totalPages + arr[i];
         } 
         else{
             StudentCount ++;
             totalPages = arr[i];
             
             if( StudentCount > k || arr[i] > mid){
                 return false;
                }
             
            } 
        } 
        
        
        return true;
    }
    
    
  public:
    int findPages(vector<int> &arr, int k) {
        
        // Sttep 1 : Find the range for binary search  
        
        if( arr.size() < k ){
            return -1;
        }
        
        int total=0;
        
        for(int i=0; i<arr.size(); i++){
            total= total + arr[i];
        } 
        
        
        int st=0;
        int end= total; 
        
        int ans = -1;
        
        while(st<=end){
            
            int mid = st + (end - st)/2;
            
            
            if( isPossible(arr , mid , k )){
                
                ans = mid;
                
                end = mid -1; 
                
            } 
            else{
                
                st = mid + 1; 
                
            } 
            
        }
        
        return ans;
    }
};