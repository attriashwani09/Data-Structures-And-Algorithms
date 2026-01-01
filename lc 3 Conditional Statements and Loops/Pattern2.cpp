#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;

    int i=0;
    while(i<n){

        int j=0;
        while (j<n)
        {
            cout<<i+1<<" ";
            j=j+1;
        }

        cout<<endl;
        i=i+1;
        
    }
} 


// Create Pattern 
// 
// 1 1 1 1 
// 2 2 2 2
// 3 3 3 3 
// 4 4 4 4