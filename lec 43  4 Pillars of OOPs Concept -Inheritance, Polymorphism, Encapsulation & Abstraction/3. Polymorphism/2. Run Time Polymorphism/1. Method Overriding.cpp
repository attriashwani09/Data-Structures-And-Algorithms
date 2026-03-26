#include<iostream>
using namespace std; 

class Animal{
    
    public : 

    void speak(){
        cout << " Animal Speaks . " << endl ; 
    } 
}; 


class Dog : public Animal{ 

    public : 

    void speak(){
        cout << "Dog Barks ." << endl ; 
    }

} ;

int main(){

    Dog d1; 


    d1.speak() ; 
} 


// Output : 
// Dog Barks .