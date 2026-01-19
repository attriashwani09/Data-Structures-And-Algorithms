#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;

    cout<<"Enter 2 Numbers :\n";
    cin>>a>>b;

    cout<<"Enter Operation :\n ";
    cin>>ch;

    switch(ch){
        case '+': 
        cout<< "Sum :" <<a+b <<endl; 
        break;

        case '-' : 
        cout<<"Sub :" << a-b <<endl;
        break;

        case '*':
        cout<<"Mul :" << a*b <<endl;
        break;

        case '/':
        cout<<"Div :" << a/b <<endl;
        break;

        default : cout<<"Not a valid Operation\n";
    } 
}