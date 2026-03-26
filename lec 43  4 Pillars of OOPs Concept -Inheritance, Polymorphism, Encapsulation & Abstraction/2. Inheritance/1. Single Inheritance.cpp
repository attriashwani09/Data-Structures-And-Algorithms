#include<iostream>
using namespace std;  

// Inheritance : it is a fundamental concept in cpp that allows a new class , called derived (child) class to inherit property and behaviour from an existing class called Parent (Base) class .  

// 5 Types : 
// 1). Single Inheritance 
// 2). Multiple Inheritance 
// 3). Multi - level 
// 4). Hierarchical 
// 5). Hybrid 


// Single Inheritance : A class is only allowed to inherit only one class .


// Parent Class 
class Person{
    public : 
    string name ;
    int age ; 

    void display(){
        cout << "Name - > " << this->name << endl ;
        cout << "Age -> " << this->age << endl ;
    }
}; 


// Child class (Derived Class ) 
class  Student : public Person{

    public : 
    int roll ;

    void show(){
        cout << "Roll no. -> " << this -> roll << endl ;
    }
} ;


int main() {

    Student S1 ;

    S1.name = "Ashwani" ;
    S1.age = 20 ;
    S1.roll = 1422004 ;

    S1.display() ;
    S1.show() ;

} 

// Output : 
// Name - > Ashwani
// Age -> 20
// Roll no. -> 1422004