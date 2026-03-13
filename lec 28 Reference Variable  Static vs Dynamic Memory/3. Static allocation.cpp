#include<iostream>
using namespace std;
int main() {

    // Static Allocation : Static allocation means the compiler knows the size at compile time and reserves the memory on the stack. 

    int arr[5] ;

    for(int i=0; i<5; i++) { 

        arr[i] = i+1;
        
    } 


    // Printing value 

    for(int i=0; i<5 ; i++) {
        cout << arr[i] << " " ;
    } 

    

}