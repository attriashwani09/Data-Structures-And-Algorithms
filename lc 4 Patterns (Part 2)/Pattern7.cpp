#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter total num of row :\n";
    cin>>n;

    int count=1;
    int row=0;
    while (row<n){

        count=row+1;
        int col=0;
        while(col<=row){
            cout<<count++<<" ";
            col++; 
            // count++;
        }  
        
        cout<<endl;
        row++;
    }
    

    return 0;
}   


// Output =
// Enter total num of row :
// 4
// 1 
// 2 3
// 3 4 5
// 4 5 6 7