#include<iostream>
using namespace std;  

// Multi - level : in a multi level Inheritance , a derived class is created from another derived class and that derived class can be derived from a base class or another derived class . 


class A{ 

    public : 

    void print1(){
        cout << "Inside class A " << endl ;
    }
} ; 


class B : public A{

    public: 

    void print2(){
        cout << "Inside class B " << endl ;
    }
} ;


class C : public B{

    public:

    void print3(){
        cout << "Inside class C " << endl ;
    }
};


int main() { 

    C obj1 ;

    obj1.print1() ;
    obj1.print2() ;
    obj1.print3() ;

} 

// // Output : 
// Inside class A 
// Inside class B 
// Inside class C 