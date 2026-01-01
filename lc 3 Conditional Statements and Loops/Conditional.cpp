#include<iostream>
using namespace std;
int main() {

    // Conditional Statements


    // 1). If-else :
    // int a;
    // cout<<" Enter the value of a :";
    // cin>> a;

    // if(a>0){
    //     cout<<"A is Postive Number";
    // } 
    // else{
    //     cout<<"A is Negative Number";
    // } 



    // 2). If - else if - else :
    // int a,b;
    // cout<< "Enter the value of a :"<<endl;
    // cin>> a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    
    // if(a>b){
    //     cout<<"A is Big"<<endl;
    // } 
    // else if(b>a){
    //     cout<<" B is Big";
    // } 
    // else{
    //     cout<< " Both a,b are Equal";
    // } 



    // Example 1 :
    // int a=2;
    // int b=a+1;

    // if((a=3)==b){
    //     cout<<a;
    // } 
    // else{
    //     cout<<a+10;
    // }


    // Example 2 :
    char ch;
    cout<<"Enter the Character : "<<endl;
    cin>>ch;

    int num =ch;
    cout<<"Character = "<< ch<<endl;
    cout<<"ASCII value of "<< ch<<" = "<< num<<endl;

    if(num>=65 && num<=90){
        cout<<"Uppercase Alphabet"<<endl;
    } 
    else if(num>=97 && num<=122){
        cout<<"Lowercase Alphabet"<<endl;
    } 
    else if(num>=48 && num<=57){
        cout <<"It is a Number .";
    }

    return 0;
}