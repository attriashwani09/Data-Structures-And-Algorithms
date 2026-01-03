#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;

    int row=0;
    while(row<n){
        int col=0;

        // for space
        int space=row;
        while(space){
            cout<<"  ";
            space--;
        } 

        // for num printing
        while(col<n-row){
            cout<<row+col+1<<" ";
            col++;
        }  
        cout<<endl;
        row++;

    }
} 


// output = 
// Enter the value of n:
// 5
// 1 2 3 4 5 
//   2 3 4 5
//     3 4 5
//       4 5
//         5