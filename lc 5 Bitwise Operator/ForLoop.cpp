#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n \n";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
    } 

    //Enter the value of n 
    // 10
    // 1 2 3 4 5 6 7 8 9 10  



    // We can also use 2 or more variables in for loop statement, like

    for(int i=0,j=4 ;i<=5 &&j<=8 ; i++ , j++){

        cout<<i <<" "<< j<<endl;
    }
    // 0 4
    // 1 5
    // 2 6
    // 3 7
    // 4 8 


    



}