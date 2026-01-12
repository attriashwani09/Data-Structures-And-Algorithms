#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number \n";
    cin>>num;

    bool isPrime=true;

    for(int i=2;i<num;i++){

        // not a prime number
        if(num%i==0){
            isPrime=false;
            break;
        }
    } 


    if(isPrime){
        cout<<"is a Prime Number\n";
    } 
    else{
        cout<<"is Not a Prime Number\n";
    } 

    
}