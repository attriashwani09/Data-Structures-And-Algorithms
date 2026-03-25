#include<iostream>
using namespace std; 

// Paramaterized Constructor :  We can also pass parameters inside a constructors .

class Hero{

    public : 

    int health ;  // *
    char level ; 

    Hero( int health){ 
        // this -> Keyword stores the address of (*) helath .
        this->health = health ; 
        cout << "this -> " << this << endl ;
    }


} ;


int main() {

    Hero h1( 100 ) ; 

    cout << " h1 Address : " << &h1 << endl ;

} 

// h1 and this have acces to the same memory (means they are same)

// Output : 
// this -> 0x61ff08
//  h1 Address : 0x61ff08