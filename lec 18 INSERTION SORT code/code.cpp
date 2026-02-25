#include<iostream>
using namespace std; 

void PrintArray( int arr[] , int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 
    cout<< endl;
} 

void insertionSort( int *arr , int n){

    for(int i=1; i< n ; i++){

        int curr = arr[i]; 
        int prev = i-1 ;

        while( prev >= 0 &&  arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev --;
        } 

        arr[prev + 1] = curr;
    } 

}
int main(){

    int arr[] = { 11 , 24 , 4 , 100 , 25 , 5 , 56 , 88 , 8 , 1} ;

    insertionSort( arr , 10);

    cout<< "Soreted Array : \n";
    PrintArray( arr , 10);
} 


// Output :
// Soreted Array : 
// 1 4 5 8 11 24 25 56 88 100  

