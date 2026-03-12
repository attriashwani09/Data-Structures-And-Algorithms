#include<iostream>
using namespace std; 

int *createValue(){

    int *p = new int(42) ;

    return p;
}

int main() {

    int * q = createValue() ;

    cout << "Created value : " << *q << endl; 

    // Created value : 42 
    
}