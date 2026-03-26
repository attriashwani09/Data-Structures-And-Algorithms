#include<iostream>
using namespace std;  

// Encapsulation : it is a core principle of oops that involves binding the data (variables) and functions (methods) that operates on the data into a single unit class .

class Hero{

    private : 
    string name ;
    int age ; 
    int height ;  

    public :  

    Hero(int age){
        this->age = age ;
    }

    int getAge(){
        return this->age ;
    }
} ;

int main() {

    Hero h1 (10); 

    cout << "Age -> " << h1.getAge() << endl ;


} 


// Output : 
// Age -> 10