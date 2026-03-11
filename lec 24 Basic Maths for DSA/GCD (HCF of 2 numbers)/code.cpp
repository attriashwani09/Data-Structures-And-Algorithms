#include<iostream>
using namespace std; 


int gcd( int a , int b ) { 


    if( a== 0 )
        return b; 

    if ( b== 0)
        return a;

    while( a != b ) {

        if(a>b){
            a = a - b;
        } 
        else{
            b = b-a;
        }
    } 


    return a;
}

int main() {

    int a= 45 , b= 75 ;

    int hcf = gcd( a , b ) ;

    cout << "Gcd of "<< a << " and " << b <<" : " << hcf << endl; 


    // if we want to find Lcm then we can use this formula 

    // hcf * lcm = a*b ;

    
} 


// Output : 
// Gcd of 45 and 75 : 15 