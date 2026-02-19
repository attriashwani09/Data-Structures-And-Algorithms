#include<iostream>
using namespace std;

void SortArray( int *arr , int n){

    int left=0;
    int right = n-1;

    while(left < right){

        // move ahead if curr element is 0
        while(arr[left]==0 && left < right){
            left++;
        } 

        // move ahead if curr element is 1 
        while(arr[right] == 1  && left < right ){
            right --;
        } 

        // swap if elements are on wrong position

        if(left < right){
            swap(arr[left] , arr[right]);
        }

    } 

    return;
}

void PrintArray( int arr[] , int n){

    for(int i=0; i<n ; i++){
        cout<< arr[i] <<" ";
    } 
    cout<< endl;
}


int main(){

    int arr[]={1,1,0,0,0,1,0,1};

    SortArray(arr,8); 

    PrintArray(arr,8);

    // 0 0 0 0 1 1 1 1 

}