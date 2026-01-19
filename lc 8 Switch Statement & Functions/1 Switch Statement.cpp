#include<iostream>
using namespace std;

int main(){

    int num=2;
    char ch='a';

    // Cases can be only declared with either int or character values.

    switch(num){

        case 1: cout<<"First\n";
        break;

        case 2: cout<<"Second\n";
        break;

        case 'a': cout<<"Character A\n";
        break;

        default : cout<<"This is default case. \n";
    }  


}