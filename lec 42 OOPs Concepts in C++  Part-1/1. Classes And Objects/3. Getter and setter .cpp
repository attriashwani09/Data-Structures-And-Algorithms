#include<iostream>
using namespace std ; 

class Hero {

    private : 
    int health ;

    public :
    char level ;

    // As we have decalred , health as private , so we can not access it with object ( means we can neither initialize nor access the value of health outside the Herp class ) . 
    // to overcome this problem we can use getter and setter . 

    int getHealth() {
        return health ;
    } 


    void setHealth( int h){
        health =   h ;
    }

};

int main() {

    Hero h1 ;


    h1.setHealth( 10 ) ;
    
    h1.level = 'A' ;

    cout << "Use getter to print the health of h1 : " << h1.getHealth() << endl ;

}