#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:\n";
    cin>> n;

    int row=0;

    while(row<n){
      
        int col=0;
        //We wil use 2 internal loops : 1) for empty spaces     2) for *
        
        // 1st loop
        while(col<n-row-1){
            cout<<"  ";
            col++;
        } 

        // 2nd Loop
        while(col<n){
            cout<<"* ";
            col++;
        } 
        cout<<endl;
        row++;
    } 

    return 0;
} 


// output =
// Enter the value of n:
// 5
//         * 
//       * *
//     * * *
//   * * * *
// * * * * *