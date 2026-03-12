
// Passing pointer to function : 

#include<iostream>
using namespace std; 

void changeValue(int *p) {
    
    // change value 

    *p = 100 ; 

} 

int main() {

    int x = 10;

    int *p = &x;

    cout << "Before Passing value : " << *p << endl ;

    changeValue( p ) ;

    cout << "After Passing value : " << *p << endl ;

} 


// Output : 

// Before Passing value : 10
// After Passing value : 100 

