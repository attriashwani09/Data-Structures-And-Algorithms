#include<iostream>
using namespace std;  

// comman Uses : 
// 1). for function parameters .
// 2). returning values from the function. 
// 3). for cleaner codes in loops to refer another variable. 


void increment(int &x) {

    x++ ;
}

int main() {

    int a = 5; 

    increment( a ) ;

    cout << a << endl;
}