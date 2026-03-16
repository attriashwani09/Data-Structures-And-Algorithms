#include<iostream>
using namespace std; 

int Fibbonacci( int n ){

    if( n == 0){
        return 0 ; 
    }   

    if(n == 1){
        return 1;
    }

    int ans = Fibbonacci( n - 1) + Fibbonacci( n - 2) ;   


    return ans; 

}

int main() {

    cout << "Enter the value : \n" ;
    int num ;
    
    cin >> num ; 

    int fib = Fibbonacci( num ) ; 

    cout << "Fibbonacci num of  " << num << " is : " << fib << endl ;  

    
    // Printing Fibbonacci series : 

    for ( int i=1 ; i<=10 ; i++) {
        int ans = Fibbonacci ( i) ;
        cout << ans << " " ;
    } 
    cout << endl ;

 
} 


// OutPut : 
// Enter the value : 
// 10
// Fibbonacci num of  10 is : 55
// 1 1 2 3 5 8 13 21 34 55  