#include<iostream>
using namespace std;

int main(){

    // Inc/Dec Operator :

    // pre increment :  ++i ;
    // in pre-increment firstly the value is incresed and then it gets utilized.

    // post-increment :  i++;
    // in  (Post increment ) first the value of i is used , then it get incremented . 
    
    
    // Similarly ,
    
    // pre/post decrement :

    // pre-dec : --i;
    // post-dec : i--;


    int i=5;
    int a=2;

    // post-increment : 
    int sum=a+ (i++);

    cout<<"Sum ="<<sum<<endl;   // Sum =7 
    cout<<" i ="<<i<<endl;      // i=6  


    // pre-increment :
    int j=5;
    int sum2=a+ (++j); 
   
    cout<<"Sum2="<<sum2<<endl; //Sum2=8
    cout<<"j="<<j<<endl;   // j=6 


    // Example :
    int k=7;

    cout<< (++k) << endl; // 8
    cout<< (k++) << endl; // 8 , k=9

    cout<< (k--) << endl; // 9 , k=8
    cout<< (--k) << endl; // 7


}