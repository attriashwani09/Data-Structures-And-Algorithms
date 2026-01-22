#include<iostream>
using namespace std;

void UpdateArray(int arr[] , int size){

    cout << "Inside Update function\n" ; 

    arr[0] = 120 ;

    // printing the array 
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    } 

    cout << endl ;
}


int main(){
    int arr[] = { 1, 2, 3 } ;

    UpdateArray(arr , 3) ;

    // Again Printing array inside main function 

    cout << "Inside Main Function :\n";
    for(int i=0 ; i<3 ; i++){
        cout << arr[i] << " " ;
    } 


} 

// output : 
// Inside Update function
// 120 2 3
// Inside Main Function :
// 120 2 3 

// Scope : When we try change the 0 index of the array from 1 to 120 in the update function and then checked it inside the main function , we found out that all the changes that we did in update function are done in the Original Array . 
// this happens array name (arr) represents the memory location of 0th index . So , when we pass it to update function instead of getting a copy of the array , the functions got access to the original array . So any changes made inside that update function will  changes in  the original array.