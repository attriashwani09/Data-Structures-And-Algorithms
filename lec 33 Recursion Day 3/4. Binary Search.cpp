#include<iostream>
using namespace std; 

bool BinarySearch( int *arr , int st , int end , int key ) {

    // Base Case : Element not found 
    if (st > end)
        return false ;

    int mid = st + ( end - st ) / 2 ;

    // Element found 
    if ( arr[mid] == key ){

        cout << key << " index is : " << mid << endl ;
        return true ; 
    }
    
    if( arr[mid] < key ){
        return BinarySearch( arr , mid + 1 , end , key ) ;   // Search in Right Part
    } 
    else {
        return BinarySearch( arr, st , mid - 1 , key ) ; // Search in Left Part . 
    } 
    
}

int main() {

    int key ; 

    int arr[10] = { 10 , 12 , 14 , 18 , 19 , 23 , 27 , 35 , 50 , 100} ;

    cout << "Enter the Key : \n" ;
    cin >> key ;  
    
    int st = 0 ;
    int end = 9 ;
    if ( BinarySearch(arr , st , end , key )){
        cout << key << " is Present ." << endl ;
    } 
    else {
        cout << key << " is Absent ." << endl ;
    }


}