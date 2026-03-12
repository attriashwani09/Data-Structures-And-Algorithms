#include<iostream>
using namespace std; 

void greet() {

    cout << "! Hello " << endl;
}

int main(){ 

    void (*ptr)()  = greet; 

    ptr() ;  

    // ! Hello 

    
} 
