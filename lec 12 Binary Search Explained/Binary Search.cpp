#include<iostream>
using namespace std; 

int BinarySearch(int arr[], int size, int key){

    int st=0;
    int end = size-1 ;

    while(st<end){

        // int mid= (st + end)/2;   // this can couse overflow at worst case , so we can use a more optimized formula 

        int mid = st + (end - st)/2;

        if(arr[mid]==key){
            return mid;
        } 

        if(arr[mid] > key){
            end = mid-1;
        } 

        else if( arr[mid] < key){
            st = mid+1;
        }

    } 


    return -1;
} 



int  main(){

    int oddArray[7]  = {11 , 24, 17, 66, 56, 24, 50};
    int evenArray[8] = {25 , 16 , 15 , 19 , 24 , 9 , 123 , 99}; 

    int evenAns = BinarySearch(evenArray , 8 ,123 ) ;
    cout<<" index of 123 in evenArray = " << evenAns << endl; 

    int oddAns = BinarySearch(oddArray , 7 , 24);
    cout<< " index of 24 in oddArray = " << oddAns << endl;



}  

// Time Complexity = O (log n)


// Output : 
//  index of 123 in evenArray = 6
//  index of 24 in oddArray = 1