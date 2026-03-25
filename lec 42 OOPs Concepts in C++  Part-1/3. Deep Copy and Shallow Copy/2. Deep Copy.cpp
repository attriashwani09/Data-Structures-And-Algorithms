#include<iostream> 
#include<string.h>
using namespace std; 

class Student{ 

    public : 
    char *name ;

    Student( const char* n) {
        name = new char[100] ;
        strcpy(name , n) ;
    } 


    // Deep Copy :Custom Copy Constructor 
    Student(const Student &temp){
        name = new char[100] ;
        strcpy( name , temp.name) ;
    } 


    void show(){
        cout << "Name : " << name << endl ;
    }

} ;

int main(){

    Student S1("Rahul") ; 

    Student S2 = S1 ;

    cout << "Before Changes : " << endl ; 

    S1.show() ;
    S2.show() ;


    cout << "After Changes : " << endl ; 

    S1.name[0] = 'k' ;

    S1.show() ;
    S2.show() ;

} 

// No chnage is made for s2 name , so it is a deep copy . 


// OUtput : 
// Before Changes : 
// Name : Rahul
// Name : Rahul
// After Changes : 
// Name : kahul
// Name : Rahul



