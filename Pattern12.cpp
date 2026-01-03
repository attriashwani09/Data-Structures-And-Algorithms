#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: \n";
    cin>>n;

    int row=0;
    while(row<n){
        
        int col=0; 
        while(col<=row){
            char ch='A'+n-row+col-1;
            cout<<ch<<" ";
            col++;
        } 
        cout<<endl;
        row++;
    }
} 


// Output =
// Enter the value of n: 
// 5
// E 
// D E
// C D E
// B C D E
// A B C D E