#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter total num of rows : \n";
    cin>> n;
    int row=0;

    while(row<n){

        int col=0;
        int data=row;
        while(col<=row){
            // cout<<data+1<<" ";

            // we can also print it without using data , just use cols
            cout<<row-col+1<<" ";

            // data--;
            col++;
        } 
        cout<<endl;
        row++;
    }
    return 0;
} 


// Output =
// Enter total num of rows : 
// 4
// 1 
// 2 1
// 3 2 1
// 4 3 2 1