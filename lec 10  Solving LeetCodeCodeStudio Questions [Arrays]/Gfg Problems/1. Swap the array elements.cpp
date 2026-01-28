class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        // Your code here
        int first =0 ;
        
        int next = 2; 
        
        int size=arr.size();
        
        while(next < size){
            
            swap(arr[first] , arr[next]);
            
            first ++;
            next = first + 2;
        } 
        
        
    }
};