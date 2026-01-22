#include<iostream>
using namespace std;

int getSum(int arr[] , int size){

    int sum = 0 ;

    for(int i=0 ; i<size ; i++){
        sum = sum + arr[i];
    } 

    return sum ;
}


int main(){

    int size;
    cout << "Enter the size of Array :\n" ;
    cin >> size ; 

    int num[100];

    for(int i=0 ; i<size ; i++){
        cin >> num[i] ;
    }   

    cout << "Array Sum : " << getSum(num , size) << endl ;


} 


// output :
// 5
// -10 11 234 14 -50
// Array Sum : 199 

