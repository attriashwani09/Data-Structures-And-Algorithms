#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter total number of rows/cols :\n";
    cin>>n;

    int i=0;
    while(i<n){

        int j=0;
        while (j<n)
        {
            cout<<j+1<<" ";
            j=j+1;
        } 
        cout<<endl;
        i=i+1;
        
    }
    return 0;
} 



// Output =
// Enter total number of rows/cols :
// 5
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 