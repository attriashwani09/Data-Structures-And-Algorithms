#include<iostream>
using namespace std;

int main() {

    int x = 42  ;

    int *p = &x ;

    int **q = &p  ;

    cout << x << " "  << endl ;

    cout << *p << " "  << endl ;

    cout << ** q << " "  << endl ;



    cout << "P (address of x ) : " << p << endl ;

    cout << "Q (address of P) : " << q << endl ;  


    // P (address of x ) : 0x61ff08
    // Q (address of P) : 0x61ff04

}