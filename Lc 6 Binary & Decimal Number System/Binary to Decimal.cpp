#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num;
    cout<<"Enter Binary Number:\n";
    cin>>num;

    int ans=0,i=0;

    while(num!=0){

        int dig=num%10;
        
        if(dig==1){
            ans+=pow(2,i);
        } 

        num=num/10;
        i++;
    } 


    cout<<"Decimal :"<< ans << endl;
}