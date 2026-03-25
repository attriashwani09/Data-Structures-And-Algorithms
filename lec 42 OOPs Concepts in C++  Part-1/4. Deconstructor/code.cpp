#include<iostream>
using namespace std;  

// Deconstructor : A deconstructor is a special member function of a class in cpp . 
// it automatically gets called when an object goes out of scope or is deleted .

class Student{ 

    public :
    int num ;

    Student(){
        cout << "Constructor called ." << endl ;
    } 

    // deconstructor : 
    ~Student(){
        cout << "Decontructor called ." << endl ; 
    } 


};

int main() {

    // In static allocation of object , deconstructor is called automatically . 
    Student S1; 


    // In Dynamic Allocation , we have call deconstructor manually . 
    Student *S2 = new Student ; 
    delete S2 ;
    

} 

// Output : 
// Constructor called .
// Constructor called .
// Decontructor called .
// Decontructor called .