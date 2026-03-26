#include<iostream> 
using namespace std ; 

class Number {

    public : 
    int value ;

    Number( int v ){
        value = v ;
    } 

    // Operator Overloading 
    Number operator+( Number obj ){
        return value -  obj.value ;
    }
};

int main() {

    Number n1(10) , n2(5) ;

    Number n3 = n1 + n2 ;

    cout << "Value = " << n3.value << endl ;
}