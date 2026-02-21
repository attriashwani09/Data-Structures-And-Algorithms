#include<iostream>
using namespace std;

int getPivot(int *arr , int size){

    int st=0;
    int end = size -1;

    while( st < end ){

        int mid = st + (end - st) / 2;

        if(arr[mid] >= arr[0]){
            st = mid +1;   // mid on upper line
        } 
        else{
            end = mid;  // mid on lower line
        } 


    } 


    return st;
}
int main(){

    int arr[]={8 ,9 ,10 ,12 ,4 ,5 ,6} ;

    int pivot = getPivot( arr , 7 ) ;

    cout<< "Pivot of the Array is : " << pivot << endl; 

   
} 


// Output :
// Pivot of the Array is : 4 