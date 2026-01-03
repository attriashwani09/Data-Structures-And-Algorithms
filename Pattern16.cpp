#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;

    int row=0;
    while(row<n){
        int col=0;

        // 1st loop for spaces 
        int space=n-row;
        while(space){
            cout<<"  ";
            space--;
        } 

        // 2nd loop for num printing
        while(col<=row){
            cout<<col+1<<" ";
            col++;
        } 
        
        // 3rd loop for remaining triangle
        if(row!=0){
            int next=0;
            int data=row;
            while(next<row){
                cout<<data<<" ";
                data--;
                next++;
            }
        }
        cout<<endl;
        row++;
    }

} 


// output =
// Enter the value of n:
// 5
//           1 
//         1 2 1 
//       1 2 3 2 1 
//     1 2 3 4 3 2 1 
//   1 2 3 4 5 4 3 2 1 