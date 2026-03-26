#include<iostream>
using namespace std;  

// Hybrid Inheritance : It is implemented by combining more than one type of Inheritance .

class Vechile{

    public : 

    Vechile(){
        cout << "This is a Vechile . " << endl ;
    }
} ;

class Fare{

    public : 

    Fare(){
        cout << "This is the Fare to ride the vechile. " << endl ;
    }
} ;


class Car : public Vechile{

    public : 

    Car(){
        cout << "This is a Car. " << endl ;
    }
} ; 


class Bus : public Vechile , public Fare{

    public : 

    Bus(){
        cout << "This is a Bus . " << endl ;
    }
} ;




int main() { 

    Bus Obj ;

} 


// Output : 
// This is a Vechile . 
// This is the Fare to ride the vechile. 
// This is a Bus . 