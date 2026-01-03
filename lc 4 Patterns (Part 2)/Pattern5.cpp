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
            cout<<row+1<<" ";
            col++;
        } 
        cout<<endl;
        row++;
    }
    

    return 0;
}  


// Output =
// 5
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5  
