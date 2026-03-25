#include<iostream>
using namespace std; 

// A constructor is automatically called when an object is created .

class A{

    public : 
    int Health ;
    char level ;

    A() {
        cout << "Default Constructor called \n" ;
    } 
    
} ; 


int main() {

    A a;
}