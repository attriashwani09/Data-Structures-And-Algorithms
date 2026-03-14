#include<iostream>
using namespace std; 

// macros : this is a preprocessor feature used to replace a name with a piece of code before compilation actually starts. 
// declared by #define 
// the preprocessor replaces all the occurances of the macro name with its defionationbefore compilation. 

#define PI 3.14 

int main() {

    int radius; 

    cout << "Enter the radius of Circle : \n" ;
    cin >> radius ;


    int area = PI* radius *radius ; 

    int circumference = 2 * PI * radius ; 


    cout << "Area = " << area << endl ;

    cout << "Circumference = " << circumference << endl;

    
    
} 


// Output : 
// Enter the radius of Circle : 
// 5
// Area = 78
// Circumference = 31