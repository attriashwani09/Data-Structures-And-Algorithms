#include<iostream>
using namespace std;

bool isPrime(int num){
    
    for(int i=2;i<num;i++){
        
        // it means num is complitely divisible by i , so not a Prime Number
        if(num%i==0){
            return false;
        } 
    } 

    return true;
}
int main(){
    int num;
    cout<<"Enter the number :\n";
    cin>> num;

    if(isPrime(num)){
        cout<<" is Prime Number\n";
    } 
    else{
        cout<<" Not a Prime Number\n";
    }


}