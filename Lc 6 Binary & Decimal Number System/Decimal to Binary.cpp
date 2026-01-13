#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number\n";
    cin>> n;
    
    // int i=0;
    int place=1;
    int ans=0;

    int num=n;
    while(n){

        int bit= n&1 ; 
        // ans= (bit*pow(10,i)) + ans; 

        ans= bit*place +ans;

        n=n>>1; 
        place=place*10;
        // i++; 
    } 

    cout<<" Binary of "<<num<<" is :"<<ans<<endl;

} 

// A better choice should b storing the ans in a string or array