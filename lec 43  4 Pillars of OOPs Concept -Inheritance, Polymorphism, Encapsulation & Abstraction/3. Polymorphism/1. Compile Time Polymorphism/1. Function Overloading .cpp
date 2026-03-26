#include<iostream>
using namespace std; 

// Function Overloading : this method allows a class to have multiple method with the same name but different parameter lists . 

class Print{

    public : 

    void show(int x) {
        cout << "Integer -> " << x << endl ;
    } 


    void show(double y) {
        cout << "Double -> " << y << endl ;
    }


    void show( string s ) {
        cout << "String -> " << s << endl ;
    }
} ;

int main() {

    Print p ;

    p.show( 10 ) ;
    p.show( 7.2 ) ; 
    p.show( "Arun" ) ;

} 

// OUtput : 
// Integer -> 10
// Double -> 7.2
// String -> Arun