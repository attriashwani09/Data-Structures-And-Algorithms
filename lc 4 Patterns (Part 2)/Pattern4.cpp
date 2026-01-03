#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter total num of rows :\n";
    cin>>n;

    int row=0;
    while (row<n){

        int col=0;
        while(col<=row){
            cout<<"* ";
            col++;
        } 
        cout<<endl;
        row++;
    }
    

    return 0;
} 


// Output =
// Enter total num of rows :
// 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 