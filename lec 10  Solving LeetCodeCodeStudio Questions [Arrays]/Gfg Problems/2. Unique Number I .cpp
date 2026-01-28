// Approach 1 : Here we first sorted the array and thn traverse it in pairs. The element whose adjacent element is not identical , that element is unique element .

class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        sort(arr.begin() , arr.end() ) ;
        
        int ans;
        
        int i = 0;
        int size = arr.size();
        
        while( i < size ){
            
           if( arr[i] != arr[i+1] && i+1 < size){
               return arr[i];
           }  
           
            i=i+2;
           
           
        } 
        
        return arr[size-1];
    }
};  



// Approach 2 : We can use hash maps  => travese the whole array and count the number of occurances of elemets in the array . Whichever elemnt have 1 occurance is unique. 



// Approach 3 : Use X-Or Operator (Most Optimal)
// 👉 Use XOR on all elements; since XOR of identical numbers is zero and XOR with zero returns the number itself, the remaining value is the unique element. 

class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int ans=0 ;
        
        for (int i=0 ; i<arr.size(); i++){
            
            ans = ans ^ arr[i];
        } 
        
        return ans;
    }
};













