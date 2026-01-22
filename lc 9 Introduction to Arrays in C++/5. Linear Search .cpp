#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int key ){

    for(int i=0; i<size; i++){
        
        if(arr[i]==key){
            return true;
        }
    } 

    return false;
}


int main(){

    int arr[10] = { 14, 26, 17, 22 , 19 , 11 , -5 , 0 , 8, 6} ;

    int key ;
    cout << "Enter the Key :\n";
    cin >> key ;

    bool found = isPresent( arr, 10, key); 

    if(found){
        cout << "Key is Present\n";
    } 
    else{
        cout << "Key is Absent\n";
    }

}