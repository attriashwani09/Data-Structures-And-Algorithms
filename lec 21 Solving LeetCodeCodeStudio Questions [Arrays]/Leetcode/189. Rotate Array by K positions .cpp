class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n= arr.size() ;
        
        vector<int> temp(n) ;
        
        for(int i=0;i<arr.size() ; i++){
            
            temp[ (i+k)%n ] = arr[i] ;
        } 
        
        
        arr = temp;
    }
};
