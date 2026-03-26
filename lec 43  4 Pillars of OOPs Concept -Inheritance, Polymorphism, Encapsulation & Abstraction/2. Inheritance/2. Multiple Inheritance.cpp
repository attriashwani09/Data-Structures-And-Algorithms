#include<iostream>
using namespace std;  

// Multiple Inheritance : it is a feature in cpp in which one class can inherit from multiple classes . 


class A{
    public : 

    void print1(){
        cout << "Inside class A " << endl ;
    }
} ;

class B{
    public : 

    void print2(){
        cout << "Inside class B " << endl ;
    }
} ;

class C : public A , public B{
    public : 

    void print3(){
        cout << "Inside class A " << endl ;
    }
} ;

int main(){
    
    C obj1;

    obj1.print1() ;
    obj1.print2() ;
    obj1.print3() ;
}  


// Output : 
// Inside class A 
// Inside class B 
// Inside class A 
