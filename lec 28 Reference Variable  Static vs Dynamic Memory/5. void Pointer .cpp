#include<iostream> 
using namespace std;

int main() {

    // Void Pointer : A void pointer is a genric pointer that can store the address of any data type but it doesn't know what type its pointing to .
    
    // think it like a pointer without type . 

    int x = 65 ;

    void *ptr = &x; 


    // we need to type cast it before dereferencing it . 

    cout << *(int*)ptr << endl;     // 65

    cout << *(char*) ptr << endl;   // A 

    

    
}