// POinters With Array 

#include<iostream>
using namespace std; 

int main() {


    int arr[5] = {10 , 20 , 30 , 40 , 50  } ;

    // 1). The array name arr is not a varibale that holds all elements. it actually decays to the first element of the array . Means it stores the memory address of oth index . 
     
    cout << arr << endl ;   // 0x61fefc 


    // 2). Pointer to array : We can store the addres in pointer . 
    
    int *ptr = arr ;
    // or 
    //  int *ptr = &arr[0] ;  

    cout << *ptr << endl ;      // 10
    cout << *(ptr + 1) << endl ;// 20 
    
    

    // 3). Pointer Arithmetic : 
    // When you do ptr+1  , the pointer moves forward by one element , not 1 byte . 

    // ptr     : address of arr[0] 
    // ptr + 1 : address of arr[1]  ( 4 byte ahead )
    // ptr + 2 : address of arr[2]  ( 8 byte ahead ) 



    // 4). Array Indexing through Pointers : 
    for( int i=0; i<5; i++) {
        cout << *( ptr + i ) << " " ;
    }  

    // 10 20 30 40 50



}
