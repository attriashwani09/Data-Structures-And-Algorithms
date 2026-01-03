#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:\n";
    cin>>n;

    int row=0;
    while(row<n){

        int col=0;
        while(col<n-row){
            cout<<"* ";
            col++;
        } 
        cout<<endl;
        row++;
    }
}  


// output =
// Enter the value of n:
// 5
// * * * * * 
// * * * *
// * * *
// * *
// *