#include<iostream>
using namespace std;

int main() {

    // Adding into a string

    string s="Aru" ;

    s += 'n'; 

    cout << s << endl;  

    string s2 ="";

    for(int i=0 ; i<4 ; i++){

        s2 += s[i];
    } 

    cout<< "s2 : " << s2 << endl;
} 

