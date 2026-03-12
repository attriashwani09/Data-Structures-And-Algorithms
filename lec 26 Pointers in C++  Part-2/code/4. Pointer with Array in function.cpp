#include<iostream>
using namespace std; 

void print_arr( int *arr , int size){

    for(int i=0; i<size ; i++){
        cout << arr[i] << " " ;
    }
}

int main() {

    int nums[5] = {10 , 20 , 30 , 40 , 50 } ;

    print_arr( nums , 5) ;  // 10 20 30 40 50  


    // nums is not a array name , it is a pointer . 

}