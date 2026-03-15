#include<iostream>
using namespace std; 

// Here start is default argument 
// if we pass arguement in function call , then the default argument will get overridden .

void PrintArray(int *arr , int size , int start = 5){

    for(int i=start ; i<size; i++) {

        cout << arr[i] << " " ;
    }  

    cout << endl ;

}

int main() {

    int arr[10] = { 1, 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10} ; 
    
    
    cout << "Printing without passing start \n" ;
    PrintArray( arr , 10 ) ;  // Here the default arguement will get used .
    // 6 7 8 9 10   
   

    cout << "Printing with passing start value \n" ;
    PrintArray(arr , 10 , 0);


} 



// Output : 
// Printing without passing start 
// 6 7 8 9 10
// Printing with passing start value
// 1 2 3 4 5 6 7 8 9 10