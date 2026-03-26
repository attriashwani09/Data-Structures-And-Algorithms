#include<iostream>
using namespace std;  

// Hierarchical Inheritance : in this more that one sub-class in inherited from a single base class . 

class livingBeing{ 

    public : 

    void print1(){
        cout << "I am a Living Being." << endl ; 
    }

}; 

class Human : public livingBeing{ 

    public : 

    void print2(){
        cout << "I am a Human." << endl ; 
    }

};

class Dog : public livingBeing{ 

    public : 

    void print3(){
        cout << "I am a Dog." << endl ; 
    }

};

int main() {

    Human h1 ;
    Dog   d1 ; 

    h1.print1() ;
    h1.print2() ;

    d1.print1() ;
    d1.print3() ;
} 


// Output : 
// I am a Living Being.
// I am a Human.
// I am a Living Being.
// I am a Dog.