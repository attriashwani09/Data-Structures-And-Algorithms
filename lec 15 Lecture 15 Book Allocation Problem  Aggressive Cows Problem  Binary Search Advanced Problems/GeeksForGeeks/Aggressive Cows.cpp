class Solution { 
    
    bool isPossible(vector<int> &stalls , int mid , int k){
        
        int cowCount = 1;
        int lastPos= stalls[0];
        
        for( int i=0; i<stalls.size() ; i++){
            
            if( stalls[i] - lastPos >=mid){
                cowCount ++;  
                
                if(cowCount == k){
                return true; 
                
                } 
                
                lastPos = stalls[i];
            
            
            }
            
            
        }  
        
        return false;
        
    }
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        
        // Step 1 : Sortinfg the array
        sort(stalls.begin() , stalls.end()) ;
        
        // Step 2 : Find the range of the stalls
        
        // int maxi =0;
        
        // for(int i=0; i< stalls.size() ; i++){
            
        //     maxi = maxi + stalls[i];
        // } 
        
        
        // step 3 : use Binary Search 
        
        int st=0;
        int end = stalls.back() - stalls.front(); 
        int ans = 0;
        
        
        while( st <= end){
            
            int mid = st + (end - st) / 2;
            
            if( isPossible(stalls , mid , k)){
                
                ans = mid;
                st = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        } 
        
        return ans;
    }
};