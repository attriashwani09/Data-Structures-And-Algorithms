#include<iostream>
using namespace std; 

void Print ( int n ) {

    if ( n == 0 ) {
        return ;
    } 

    // Tail Recursion : If processing is done before Recursive relation . 
    // cout << n << " " ;

    Print( n - 1) ; 

    // Head Recursion : If Processing is done after recursive relation .
    cout << n << " " ;
}

int main() {

    int num ; 

    cout << "Enter the number : \n" ;
    cin >> num ;
 
    Print ( num ) ;
}