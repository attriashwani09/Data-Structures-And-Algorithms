#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n :\n";
    cin>>n;

    int row=0;

    while(row<n){

        int col=0;
        while(col<n){
            char ch='A'+row;
            cout<<ch<<" ";
            col++;
        } 
        cout<<endl;
        
        row++;
    }
}   


// Output = 
// Enter the value of n :
// 5
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E