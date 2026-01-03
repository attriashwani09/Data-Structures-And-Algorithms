#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n:\n";
    cin>> n;

    int row=0;
    while(row<n){
        int col=0;

        // 1st triangle
        while(col<n-row){
            cout<<col+1<<" ";
            col++;
        }  

        // 2nd triangle of * data 
        int start=row;
        while(start){
            cout<<"* * ";
            start--;
        } 

        // 3rd triangle 
        int col2=0;
        while(col2<n-row){
            cout<<n-col2<<" ";
            col2++;
        }

        cout<<endl;
        row++;
    }
} 


// Output =
// Enter the value of n:
// 5
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 5 4 3 2
// 1 2 3 * * * * 5 4 3
// 1 2 * * * * * * 5 4
// 1 * * * * * * * * 5