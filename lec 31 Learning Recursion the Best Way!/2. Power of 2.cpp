#include<iostream>
using namespace std; 

int power( int n ){

    // Base case 
    if( n == 0){
        return 1;
    } 

    return 2 * power( n - 1) ;
}

int main() {

    int num ;

    cout << "Enter the power of 2 :\n" ;
    cin >> num ;

    int ans = power(5) ;

    cout << "2^" << num << " is : " << ans << endl;

} 


// Output : 
// Enter the power of 2 :
// 5
// 2^5 is : 32 