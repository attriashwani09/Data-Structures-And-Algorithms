#include<iostream>
using namespace std;  

// Recursion : When a function calls itself , to solve smaller problem of a larger complex problem . 

int factorial( int n ) {

    // Base case 
    if( n == 0) {
        return 1;
    } 

    // int smallerrProblem = factorial ( n - 1 )  ;
    // int ans = n * smallerrProblem ;
    // return ans;    
    
    // or we can also write 

    return n * factorial( n - 1 ) ;
}

int main() {

    int num ;

    cout << "Enter the value :\n" ;

    cin >> num ; 

    int fact = factorial ( num ) ;

    cout << "Factorial of " << num << " is : " << fact << endl ;

    
}