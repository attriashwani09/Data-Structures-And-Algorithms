class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int arr[26] = {}; 
        
        
        // to check the total occurances of each char in string;
        for(int i=0;i< s.length() ; i++){
            
            int num = s[i] - 'a';
            
            arr[num] ++;
        }   
        
        int maxi = INT_MIN;
        char ans;
        
        for(int i=0; i<26 ; i++){
            
            if(arr[i] > maxi){
                maxi = arr[i];
                ans = i + 'a';
            }
        }
        
        return ans;
        
    }
};