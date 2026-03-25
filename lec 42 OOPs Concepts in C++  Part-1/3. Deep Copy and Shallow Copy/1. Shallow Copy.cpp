#include<iostream> 
#include<string.h>
using namespace std;  

// Shallow Copy :  Copies all the data members as they are ( bit by bit ) . if there are 2 objects , then both object's data memebers will aceess same memory location . 
// Any changes made with one objects data memeber will also make changes in another object's data memeber . 

// Default Copy Constructor makes shallow copy .

class Student{ 

    public : 
    char *name ;

    // Constructor 

    Student(const char*n){
        name = new char[100] ;
        strcpy( name , n) ;
    } 


    void show(){
        cout << "Name : " << name << endl ;
    }

} ;

int main() { 

    Student S1("Rahul") ;

    // Shallow Copy : Default Copy Constructor 

    Student S2 = S1 ; 

    cout << "Before Change : " << endl ; 
    S1.show() ;
    S2.show() ; 

    cout << "After Change : " << endl ; 
    S1.name[0] = 'k' ;  

    S1.show() ;
    S2.show() ;

} 

// As we can see that if we changed the value of one object , other objecvt value also gets affected . This is because both the objects share same memory location .  
// This is why it is callled a shallow copy . 


// Output : 
// Before Change : 
// Name : Rahul
// Name : Rahul
// After Change :
// Name : kahul
// Name : kahul