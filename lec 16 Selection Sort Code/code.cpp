#include<iostream>
using namespace std; 

void PrintArray(int arr[] , int n){

    for(int i=0 ; i<n ; i++){
        cout<< arr[i] << " ";
    } 
    cout<< endl;
}  

void SelectionSort(int *arr , int n){

    for(int i=0; i<n-1; i++){

        int minindex = i;

        for( int j= i+1; j<n ; j++){

            if(arr[minindex] > arr[j]){
                minindex = j;
            }
        } 

        swap(arr[i] , arr[minindex]);
    }

} 

// Here we firstly check the minimum in the array , get its position and swap it with current element ;

int main(){

    int arr[10] = { 11 , 24 , 36 , 78 , 99 , 5 , 14 , 3 , 1 , 100};

    SelectionSort( arr , 10);

    cout<< "Sorted Array : \n";
    PrintArray( arr , 10) ;
} 

// Tc : O(n^2) 

// Output :
// Sorted Array : 
// 1 3 5 11 14 24 36 78 99 100 

