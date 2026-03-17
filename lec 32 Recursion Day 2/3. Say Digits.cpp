#include<iostream>
using namespace std;  

// Normal Code Without Recursion : 

// void SayDigits ( int num , string arr[]){

//     int revnum = 0 ;

//     while ( num !=0 ) {

//         int dig = num % 10 ; 

//         revnum = revnum*10 + dig;

//         num = num / 10 ;

//     } 


//     while( revnum != 0 ) {
//         int dig = revnum % 10 ; 

//         cout << arr[dig] << " " ;

//         revnum = revnum / 10;
//     }
    
//     return ;
// } 



// With the Help of Recursion : 

void SayDigits( int num , string arr[]) {

    if( num == 0)
    return ; 

    int dig = num % 10 ;
    num = num / 10 ;

    SayDigits( num , arr) ;

    cout << arr[dig] << " " ;
 
}

int main() {  

    string arr[10] = { "Zero " , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"} ;  
    
    int num ;
    cout << "Enter the Number  : \n" ;
    cin >> num ; 

    SayDigits( num , arr ) ; 
}