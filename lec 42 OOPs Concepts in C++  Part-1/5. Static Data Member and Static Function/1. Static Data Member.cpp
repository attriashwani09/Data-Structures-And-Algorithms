#include<iostream>
using namespace std;  

// it belongs to class , not to any object . 
// only  one copy is shared among all objects of the class . 

// It is created once and destroyed when the program ends . 
// Must be defined outside the class . 


class Hero{ 

    public : 

    static int timeToComplete ;    // declaration . 

    Hero() {
        cout << "Hero Created ! " << endl ;
    } 
}; 

int Hero::timeToComplete = 10;

int main(){ 

    // can be accessed directly without the creation of any object. (Preferred) 
    cout << Hero::timeToComplete << endl ;  


    Hero h1 ;

    cout << h1.timeToComplete << endl ; 

} 

// Output : 
// 10
// Hero Created !
// 10 

