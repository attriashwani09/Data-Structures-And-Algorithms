#include<iostream>
using namespace std;
int main(){

    int total; 
    int a,b,c,d;
    cout<<"Enter the total amount \n";
    cin>>total; 

    switch(100){
        case 100: // for 100 rs notes
        a=total/100;
        cout<<" 100 rs notes : " << a << endl;
        total=total - (a*100) ;

        case 50 : // for 50 rs notes 
        b=total/50;
        cout<<" 50 rs notes : " << b << endl;
        total = total - (b*50) ;

        case 20 : // for 20 rs notes 
        c=total/20;
        cout<<" 20 rs notes : " << c << endl;
        total = total - (c*20);

        case 1 : //  for 1rs coins
        d=total;
        cout<<" 1 rs coins : "<< d << endl;
        total=total - d;
        break;
    }
} 


// output :
// Enter the total amount 
// 1330
//  100 rs notes : 13
//  50 rs notes : 0
//  20 rs notes : 1
//  1 rs coins : 10