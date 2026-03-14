#include<iostream>
using namespace std; 

// INline Function : it is a function where the compiler replaces the function call with the actual unctioon code during compilation. 

// Use inline function when the func length is actually very small . (it should be bbetween 1 to 3 lines ) . 

inline int getMax(int a , int b){

    return  ( a > b ) ? a : b ;
}

int main() {

    int a = 10 ;

    int b = 20 ;

    int ans = getMax( a , b) ;

    cout << "Ans =" << ans << endl ;

} 



// Output : 
// Ans =20