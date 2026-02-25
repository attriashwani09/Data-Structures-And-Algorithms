#include<iostream> 
#include<array>
using namespace std;

int main() {

    int arr[4] = { 1 , 2, 3 , 4 } ;

    // Now, we can also create STL Array  
    // STL array is also implemented in the  same way as arr . 

    array< int , 4> arr2 = { 1 , 2 , 3 , 4 } ; 
     
    for( int i=0; i< arr2.size() ; i++){
        cout<< arr[i] << " " ;
    } 
    cout << endl; 

    // Operations on STL Array 

    // 1). Size :
    int size = arr2.size() ;
    cout<< "Size of Array = " << size << endl; 


    // 2). At :
    cout << "Element at Index 2 -> " << arr2.at(2) << endl;  

    // 3). CHeck Empty :
    cout << "Is arr2 Empty -> " << arr2.empty() << endl; 

    // 4). First and last Index Element :  
    cout << "First Index Element -> " << arr2.front() << endl;
    cout << "Last Index Element -> "  << arr2.back() << endl; 


} 

// Output :
// 1 2 3 4 
// Size of Array = 4
// Element at Index 2 -> 3
// Is arr2 Empty -> 0
// First Index Element -> 1
// Last Index Element -> 4 

