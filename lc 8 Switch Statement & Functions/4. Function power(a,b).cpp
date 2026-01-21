#include<iostream>
using namespace std;

int pow(){
    int a,b;
    cout<<" Enter number \n";
    cin>> a;

    cout<<" Enter Power \n";
    cin>> b;

    int ans=1;

    for(int i=0;i<b;i++){
        ans=ans*a;
    } 

    return ans;
}


int main(){

    int ans=pow();
    cout<< " answer : "<< ans << endl; 

    return 0;
} 

// output 
//  Enter number 
// 5
//  Enter Power 
// 3
//  answer : 125

