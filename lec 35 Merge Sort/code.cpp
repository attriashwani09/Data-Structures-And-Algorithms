#include<iostream>
using namespace std; 

void merge( int *arr , int st , int end){ 

    int mid = st + (end - st) / 2;
    int len1 = mid - st + 1;
    int len2 = end - mid ;

    // Create 2 dynamic array  

    int *temp1 = new int[len1] ;
    int *temp2 = new int[len2] ; 

    // copy the values of main array in both temp arrays 


    int mainArrayIndex = st ;

    for(int i=0; i< len1 ; i++) {

        temp1[i] = arr[mainArrayIndex ++] ;
    } 

    mainArrayIndex = mid + 1;

    for(int i=0; i< len2 ; i++){

        temp2[i] = arr[mainArrayIndex ++ ] ;
    } 
    
    // Just do merge of 2 sorted arrays 

    int index1 = 0 ;
    int index2 = 0 ;  

    mainArrayIndex = st;

    while( index1 < len1  && index2 <len2){

        if( temp1[index1] < temp2[index2] ){

            arr[mainArrayIndex++] = temp1[index1 ++];
        } 
        else{
            arr[mainArrayIndex++] = temp2[index2 ++ ] ;
        }
    } 


    // if temp1 elements are left 

    while( index1 < len1){
        arr[mainArrayIndex++] = temp1[index1++] ;
    }  


    // if temp2 elements are left 

    while( index2 < len2 ){
        arr[mainArrayIndex ++] = temp2[index2 ++] ;
    } 

    delete[] temp1 ;
    delete[] temp2 ;

} 


// Merge Sort 
void MergeSort( int *arr , int st , int end) {

    if( st >= end) 
    return ;

    int mid = st + (end - st) / 2;

    // Sort Left 
    MergeSort( arr , st , mid) ; 
    // sort Right 
    MergeSort( arr , mid + 1 , end) ;

    merge( arr , st , end ) ;
}

void PrintArray( int *arr , int size){
   
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }
}
int main() {

    int arr[10] = { 5 , 10 , 4 , 18 , 8 , 9 , 3 , 14 , 500 , 26} ;

    
    int size = 10;

    MergeSort( arr , 0 , size - 1) ;

    // Print Array ;

    PrintArray( arr , size) ;

}