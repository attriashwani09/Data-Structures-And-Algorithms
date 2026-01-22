#include<iostream> 
#include<limits.h>
using namespace std;

int getMax(int arr[] , int size ){

    int maxi=INT_MIN; 

    for(int i=0 ; i<size ; i++ ){
        
        // inbult function 
        maxi = max(maxi,arr[i]);

        // if( arr[i] > ans){
        //     ans=arr[i];
        // }
    } 

    return maxi;
}  


int getMin( int arr[] , int size){

    int mini = INT_MAX;

    for(int i=0; i<size ; i++){
        mini=min(mini,arr[i]);
    } 

    return mini;
}


int main(){

    int size;
    cout << "Enter the size of Array :\n" ;
    cin >> size ; 

    int num[100];

    for(int i=0 ; i<size ; i++){
        cin >> num[i] ;
    } 

    cout<< "Maximun Element : " << getMax(num , size) << endl ;
    cout<< "Minimun Element : " << getMin(num , size) << endl ;
    
    return 0;
} 


// output : 
// Enter the size of Array :
// 5
// -10 11 234 14 -50
// Maximun Element : 234
// Minimun Element : -50