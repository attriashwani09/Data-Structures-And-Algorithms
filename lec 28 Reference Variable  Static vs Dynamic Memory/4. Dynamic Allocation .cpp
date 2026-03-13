#include<iostream>
using namespace std;

int main(){  



    int n;
    cout << "Enter the size of array :\n";
    cin >> n ; 

   int *arr = new int[n];  // new : used to allocate Dynamic Memory 

   // assigning values 
   for(int i=0; i<n; i++){ 

        arr[i] = i+1; 

   } 


   // printing value 

   for(int i=0; i<n; i++ ){
        cout << arr[i] << " " ;
   }  

   // Should be cleared after use (must free heap memory)

   delete[] arr;  // delete : used to de- allocate dynamic memory . 

   
} 


// Output : 
// Enter the size of array :
// 5
// 1 2 3 4 5  


