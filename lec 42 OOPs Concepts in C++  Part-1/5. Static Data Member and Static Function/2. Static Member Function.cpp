#include<iostream>
using namespace std ; 

// Static Member Function : 
// It belongs to a class , not any object . 
// can be called using class name (without creating an object) . 
// can only access static data members . (because non - static members require an object) . 

class Hero{

    public :
    static int count ;

    Hero() {
        count ++ ;
    } 

    // Static Function 
    static void displayCount() {
        cout << "Total Heroes : " << count << endl ; 
    } 

} ;

int Hero::count = 0 ;

int main() { 

    Hero h1 , h2 , h3 ; 

    Hero::displayCount() ; 

    h1.displayCount() ;

} 


// Output : 
// Total Heroes : 3
// Total Heroes : 3