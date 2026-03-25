#include<iostream>
using namespace std;  

// Accessing Elements : 

// By default a class elements are Private , and because of it we can not access the elements that are declared inside the class . 
// So we if we want to use to class elements , we have to use public access specifier .

class Hero{

    public :

    int health ;
    char level ; 

    void print() {
        cout << "health -> " << health << endl ;
        cout << "level -> " << level << endl ;
    }

} ;

int main() {

    Hero h1 ;

    // We can access the data members and member functions with the help of ( . ) operator .
    h1.health = 10 ; 
    h1.level = 'A' ;

    cout << h1.health << endl ;
    cout << h1.level << endl ; 

    h1.print() ;


}