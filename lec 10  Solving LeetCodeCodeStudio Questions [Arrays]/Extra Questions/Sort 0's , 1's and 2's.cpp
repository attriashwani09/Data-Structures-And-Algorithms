#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    } 
    cout << endl;
}

void SortArray(int *arr , int n) {

    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){

        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        } 
        else if(arr[mid] == 1){
            mid++;
        } 
        else{
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
}


int main(){

    // Sort 0's , 1's and 2

    int arr[] = { 1,2,0,2,0,0,1,2};

    SortArray(arr , 8);

    PrintArray( arr , 8);

    // 0 0 0 1 1 2 2 2 


}