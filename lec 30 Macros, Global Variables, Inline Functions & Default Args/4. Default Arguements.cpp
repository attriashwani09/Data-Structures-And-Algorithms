#include<iostream>
using namespace std; 

void printArray(int *arr , int size , int start = 0) {

    for(int i = start; i < size ; i++){

        cout << arr[i] << " " ;
    } 

    cout << endl;
}

int mian() {

    int arr[10] = { 1 ,2 ,3 , 4, 5 , 6 ,7 ,8 ,9 ,10} ;

    printArray( arr , 10 , 5) ;

}