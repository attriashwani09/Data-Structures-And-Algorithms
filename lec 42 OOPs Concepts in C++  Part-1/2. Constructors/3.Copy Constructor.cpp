#include<iostream>
using namespace std; 

class Hero{ 
    public : 
    int health ;
    char level ;

    // This is a copy Constructor . 
    Hero( Hero &temp){
        
       this ->health = temp.health ;
       this ->level = temp.level ;
    }  

    Hero( int health , int level) {
        this ->health = health ;
        this ->level = level ; 
    }

    void print() {

    cout << "Health -> " << this ->health << endl ;
    cout << "Level -> " << this ->level << endl ;

    }
} ;
    
int main() {

    Hero S( 100 , 'A') ; 

    Hero A(S) ;

    S.print() ;
    A.print() ;
} 

// Output : 
// Health -> 100
// Level -> A
// Health -> 100
// Level -> A