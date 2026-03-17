// Sum of All elements of Array 

#include<iostream>
using namespace std; 

int sum( int *arr , int size  ){

    if( size == 0 )
    return 0 ;  

     return arr[0] + sum( arr + 1 , size - 1);


}

int main() {

    int arr[5] = {10 , 20 , 30 , 40 , 50 } ;

    int sum1 = sum( arr , 5 ) ; 

    cout << "Sum of Array is : " << sum1 << endl ;

}