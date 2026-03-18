// Linear Search ( Using Recursion ) 

#include<iostream>
using namespace std; 

bool Search( int *arr , int size , int key ){

    // Base Case : 
    if( size == 0 ){
        return false ;
    } 

    // Element Found 
    if( arr[0] == key){
        return true ;
    } 

    return Search( arr + 1 , size - 1 , key ) ;
}

int main() {

    int key ; 

    int arr[5] = {10 , 15 , 20 , 11 , 17} ;

    cout << "Enter the element to search in Array :\n" ;
    cin >> key ;

    if( Search(arr , 5 , key) ) {
        cout << key << " is Present ." << endl ;
    } 
    else{
        cout << key << " is Absent . " << endl ;
    }
     
}