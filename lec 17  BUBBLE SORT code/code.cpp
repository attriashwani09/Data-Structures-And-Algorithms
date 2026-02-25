#include<iostream>
using namespace std; 

void PrintArray( int arr[] , int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    } 
    cout << endl;
} 

void bubbleSort(int *arr , int n){ 


    for( int i=0; i< n-1 ; i++){

        bool isSwaped = false ;
        for(int j=0; j< n-i-1 ; j++){

            if(arr[j] > arr[j+1]){ 

                swap(arr[j] , arr[j+1]); 

                isSwaped = true;
            } 

        } 
        
        if( isSwaped == false){
            break;
        }

    } 
}

int main(){

    int arr[] = {10 , 14 , 4 , 18 , 25 , 17 , 4 , 12 , 2 , 3 };

    bubbleSort( arr , 10);

    cout << "Sorted Array : \n";
    PrintArray(arr , 10);
} 


// Output :
// Sorted Array : 
// 2 3 4 4 10 12 14 17 18 25 