#include<iostream>
using namespace std;

int main() {

    char name[] = "Ashwani" ;

    char *ptr = name; 

    cout << ptr << endl ;  //  Ashwani 

    // in array when we used to print any POinter we used to get its address  but in string printing pointer returns us the whole string .
    // It gives us the full string witgout dereferencing it . 


    // Now to Get string letters one by one , we can dereference it : 
    
    cout << *ptr << endl ; // A

    cout << *(ptr + 1) << endl ;  // s

    cout << *(ptr + 2) << endl ;  // h 


} 


// Output :
// A
// s
// h