#include<iostream>
using namespace std;

int main() {

    int row , col ; 

    cout << "Enter the number of rows " << endl;
    cin >> row ;

    cout << "Enter the number of columns " << endl;
    cin >> col ;

    // Creating the array : we haave to use 2 pointers 
    int ** arr = new int*[row] ;

    for(int i=0; i<col ; i++) {
        arr[i] = new int[col];
    }  



    // Assigniung the values in the array 

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){
            cin>> arr[i][j]; 
        }
    } 



    // output : 

    for(int i=0; i<row; i++){

        for(int j=0; j<col; j++){
            cout << arr[i][j] << " " ;
        } 
        cout << endl;
    } 


    // deletion (freeing heap memory) 

    for(int i=0; i<row; i++){
        delete[] arr[i] ;
    } 



}