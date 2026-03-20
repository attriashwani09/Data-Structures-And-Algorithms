#include<iostream>
using namespace std; 

void printArray( int *arr , int size ){

    for( int i=0; i< size  ; i++){
        cout << arr[i] << " " ;
    } 
    cout << endl ;
} 


void bubbleSort( int *arr , int size) { 

    if( size == 0 || size == 1 )
    return ;

    bool isSwaped = false ;

    for( int i=0; i<size -1; i++ ){

        if( arr[i] > arr[ i + 1 ]){

            swap( arr[i] , arr[i+1]); 
            isSwaped = true;
        }
    } 

    if( isSwaped == false)
    return ;

    bubbleSort( arr , size - 1);

}

int main() {

    int arr[10] = { 10 , 12 , 6 , 24 , 500 , 50 , 2 , 26 , 14 , 38} ; 

    int size = 10;

    bubbleSort( arr , 10 ) ;

    // Size - 1 because assume that 1st element is already sorted ; 
    printArray( arr , size ) ;
}