#include<iostream>
using namespace std; 

int power( int a , int b) {

    if( b == 0)
    return 1;

    if( b == 1)
    return a;

    int ans = power ( a , b/2) ;

    // when power is even
    if( b % 2 == 0){
        return ans * ans ;
    } 
    else{
        // odd case 
        return a * ans * ans ;
    }

}

int main() {

    int a , b  ;
    cout << "Enter the number :\n" ;
    cin >> a ;

    cout << "Enter the Power of " << a << " : " << endl ;  
    cin >> b ;

    int ans = power( a , b) ;
    cout << "Ans : " << ans << endl ; 
    

}