#include<iostream>
using namespace std;

bool isEven(int num){

    // Odd Number
    if(num&1){
        return false;
    } 

    return true; // Even Number
}

int main(){

    int num;
    cout<<"Enter the Number :\n";
    cin>>num; 
    
    if(isEven(num)){
        cout<<num<<" is an Even Number\n";
    } 
    else{
        cout<<num<<" is a odd number\n";
    } 
    
}