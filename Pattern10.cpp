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
            char ch='A'+col;
            cout<<ch<<" ";
            col++;
        } 
        cout<<endl;
        row++;
    }
    return 0;
} 


// output = 
// Enter the value of n :
// 5
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 