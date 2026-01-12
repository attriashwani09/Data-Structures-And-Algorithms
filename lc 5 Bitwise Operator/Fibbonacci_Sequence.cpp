#include<iostream>
using namespace std;

int main(){

    int n; 
    cout<<"Enter the value of n\n";
    cin>>n; 

    int a=0 , b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=0;i<n;i++){
        int next=a+b;
        cout<<next<<" ";

        a=b;
        b=next;
    } 
} 


// Output = 
// Enter the value of n
// 10
// 0 1 1 2 3 5 8 13 21 34 55 89 