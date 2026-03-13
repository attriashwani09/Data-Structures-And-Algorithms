#include<iostream>
using namespace std; 

int main(){

    // Reference Variables : A reference variable is basically on alias for an already existing variables. 

    // It does not share its own value . It just refers to the original variable. 


    // 1). Decalation : 
    int x = 10;

    int &ref = x;   // ref is just another name for x  
    // it just shares the same memory location. changing one changes another .

    cout << "ref = " <<  ref << endl; 

    ref ++;

    cout << " a = " << x  << endl ;  


    // 2). Must be initialized when Declared : 

    // int a;

    // int &y;   : this will give error .  





}