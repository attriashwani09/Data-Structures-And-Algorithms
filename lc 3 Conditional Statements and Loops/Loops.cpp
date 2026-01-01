#include<iostream>
using namespace std;
int main(){

    // Loops : 

    // 1). While Loop : Print Number from 1 to n
    // int n;
    // cout<<"Enter the value of n : "<<endl;
    // cin>>n;
    
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i=i+1;
    // } 


    // 2). Sum of N Natural Numbers
    // int num;
    // cout<<" Enter the num :"<<endl;
    // cin>>num;
    
    // int sum=0;
    // int i=1;
    // while (i<=num)
    // {
    //     sum=sum+i;
    //     i=i+1;
    // } 

    // cout<<"Sum of 1 to "<<num<<" is "<< sum<< endl;
     


    // 3). check if the number is Prime or Not
    int num;
    cout<<"Enter Number :"<<endl;
    cin>>num;

    bool prime = true;
    int i=2;

    while(i<num){

        if(num%i==0){
            prime=false;
            break;  // to stop the loop.
        } 

        i=i+1;
    } 

    if(prime){
        cout<<num<<" is a prime Number.\n";
    } 
    else{
        cout<<num<<" is not a Prime Number.\n";
    }


    return 0; 
}