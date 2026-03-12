#include<iostream>
using namespace std;

int main(){

    //1)  POinters : it is a variable that stores the memory address of another varibale. '
    //    instead of Holding value directly , it points to where the value is stored in memory . 
    
    // & = address of variable 
    // * = dereference Operator
    int x = 10;
    int *ptr = &x; 

    cout << ptr  << endl;  //  0x61ff08
    cout << *ptr << endl; //   10 


    int num = 10 ;

    cout << "num = " << num << endl;                    // num = 10
    cout << "address of num = " << &num << endl;        // address of num = 0x61ff04  

    // THe address is stored in memory in hexadecimal format .
    
    
    // 2).  Accessing value from the pointer  :

    int num1 = 10 ;
    int *ptr1 = &num ;

    cout << ptr1  << endl ;     // 0x61fefc
    cout << *ptr1 << endl ;     // 10
    cout << num1  << endl ;     // 10 

    // *ptr1 gives 10 because * is a dereferance operator which returns the value from address. 


    // 3). Size of Pointer : The size of a pointer depends on the architecture of the system (32-bit or 64-bit), not on the data type it points to. 
    // 1️⃣ On a 32-bit system : Pointer size = 4 bytes 
    // 2️⃣ On a 64-bit system : Pointer size = 8 bytes  (Because addresses are 64 bits ) . 

    cout << "Size : " << sizeof(ptr) << endl ;  
    // Size : 4 




    // 4). NUll Pointer : A pointer that points to nothing .  

    // INitialization 
    int *ptr2 = nullptr ;
            // or 
    int *ptr3 = 0 ;   

    cout << "Null POinter -> " << ptr2 << endl ;         // Null POinter -> 0 
   

    // Giving Address to null pointer : 

    int i = 5;

    ptr2 = &i ; 
    // After giving address 
    cout << "Null POinter -> " << ptr2 << endl ;   // Null POinter -> 0x61fef0 




    // 5). Copying Pointers :- 
    
    int num2 = 10 ;
    int *ptr4 = &num2 ;
    int *q = ptr;

    cout << ptr << " <---> " << q << endl ;   // 0x61fef0 <---> 0x61fef0
    cout << *ptr << " <---> " << *q << endl ; // 10 <---> 10 




    // INcrementing Pointers :- 

    int j = 200 ;

    int *t = &j ;

    cout << "Before increment = " << t << endl ;

    t = t + 1 ;

    cout << "After Increment = " << t << endl ; 

    cout << "Value at ptr5 after increment = " << *t << endl ; // now the value will be shifted by 4 byte because integer stores data of 4 bytes , so now it will not show j . It will give us a garbage value .  


    









}