#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<5;i++){

        cout<<"First Statement"<<endl;
        cout<<"Second Statement"<<endl; 
        continue;
        cout<<"Final Statement"<<endl; 

    } 


    
} 

// Output = 
// First Statement
// Second Statement
// First Statement
// Second Statement
// First Statement
// Second Statement
// First Statement
// Second Statement
// First Statement
// Second Statement 


//Here the final Statement never got Printed , because whenever loop prints the "second Statement" it gets contuie and skips the final .