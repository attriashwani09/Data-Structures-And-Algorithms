#include<iostream>
using namespace std; 

// Global Variable : these are the varibales that are declared outside all functions and are accessible from anywhere in the same file .  

int score = 15 ; 

void a() {

    cout << score << endl;

    score ++ ;

} 

void b() {

    cout << score << endl ;
}


int main() {

    a() ;

    b() ;


} 


// Output : 
// 15
// 16