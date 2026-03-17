// Program to check if the array is sorted using recursion . 

#include<iostream>
using namespace std ; 

bool isSorted( int *arr , int size) {

    if(size == 0 || size == 1 ){
        return true;
    } 

    if( arr[0] > arr[1]){
        return false ;
    } 
    else{

        return isSorted( arr + 1 , size - 1 ) ;
    }
}

int main() {

    int arr[10] = { 10 , 20 , 50 , 40 , 60 , 8 , 11 , 90 , 55 , 10 } ;

    int arr2[5] = { 10 , 20 , 30 , 40 , 50 } ;

    
    if (isSorted(arr , 10 )){
        cout << "1st Array is Sorted \n" ;
    } 
    else{
        cout << "1st Array is unsorted \n" ;
    } 

    cout << endl ;

   if (isSorted(arr2 , 5 )){
        cout << "2nd Array is Sorted \n" ;
    } 
    else{
        cout << "2nd Array is unsorted \n" ;
    }  

    cout << endl ;


}