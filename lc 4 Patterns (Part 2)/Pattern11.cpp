#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;

    int row=0;
    while(row<n){

        int col=0;
        while (col<n){
            
            char ch='A'+row+col;
            cout<<ch<<" ";
            col++;
        } 
        cout<<endl;
        row++;
        
    }
} 

// output =
// Enter the value of n:
// 5
// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I 