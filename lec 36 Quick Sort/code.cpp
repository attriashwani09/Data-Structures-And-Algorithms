#include<iostream>
using namespace std; 

int partation( int * arr , int st , int end){

    // choose pivot 
    int pivot = arr[st] ;

    // take pivot to its correct position 
    int cnt = 0;
    for(int i=st + 1; i<=end; i++){
        
        if(arr[i] <= pivot){
            cnt ++ ;
        } 
    }  


    int pivotIndex = st + cnt ;

    // swap pivot with to its correct index .
    swap( arr[st] , arr[pivotIndex]) ;
    

    // solve the other part such that all the elements at left side of the pivotIndex are smaller than pivot and all the elemets right side to the pivotIindes are larger than pivot . 

    int i=st ;
    int j=end ;

    while( i < pivotIndex && j > pivotIndex ){

        while( arr[i] <= pivot ){
            i++;
        } 

        while(arr[j] > pivot){
            j --;
        } 

        if( i < pivotIndex && j > pivotIndex ){
            swap( arr[i] , arr[j]);
            i++;
            j--;

        }
    } 


    return pivotIndex ;

}

void QuickSort( int *arr , int st , int end ){

    // Base Case : 
    if( st >= end){
        return ;
    } 

    int p = partation( arr , st , end ) ; 

    // Recursively solve left and right 
    QuickSort( arr , st , p-1) ;   // left Part 

    QuickSort( arr , p+1 , end) ;  // right part 

}


int main() {

    int arr[10] = {50 , 10 , 30 , 80 , 40 , 15 , 90 , 5 , 120 , 14} ; 
    
    int n = 10 ;

    QuickSort( arr , 0 , n-1 ) ; 

    // Print the Array after QuickSort  

    cout << "Array after Quick Sort : \n" ;

    for( int i=0 ; i<n; i++){
        cout << arr[i] << " " ;
    } 

    cout << endl; 
}