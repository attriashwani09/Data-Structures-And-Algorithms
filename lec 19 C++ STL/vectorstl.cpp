#include<iostream> 
#include<vector>
using namespace std;

int main() {

    // 1)> Decelaration :
    vector<int> v; 

    // initializing all the vector with single number :
    vector<int>  a(5 , 1) ; 

    cout<< "Vector A : " << endl; 

    for(int i: a) {
        cout<< i << " " ;
    } 
    cout<< endl; 


     // copying another vector :

    vector<int> last(a);  
    
    cout << "Copied Vector is :\n" ;
    for(int i: last) {
        cout<< i << " " ;
    } 
    cout<< endl; 



    // 2)> CHecking Capacity :
    cout<< "Capacity -> " << v.capacity() << endl;  

    // 3). Pushing Element : 
    v.push_back(1) ;
    cout<< "Capacity -> " << v.capacity() << endl; 

    v.push_back(2) ;
    cout<< "Capacity -> " << v.capacity() << endl; 

    v.push_back(3) ;
    cout<< "Capacity -> " << v.capacity() << endl;   

    // From above , we come to know that every time the memory of the vector finishes , a new vector is created with double the size and all the previous elements .   
    
    
    // 4). Size :
    int size = v.size() ;
    cout<< "Size of vector -> " << size << endl; 


    // 5). At :

    cout << "Element at index : " << v.at(2) << endl;

    // 6). Accessing front and back Elements :

    cout<< "Front Element is :" << v.front() << endl;
    cout<< "Back Element is :" << v.back() << endl; 


    // 7). Poppingt the Element :

    // iteration before poping :

    for( int i:v) {
        cout<< i <<" " ;
    } 
    cout<<endl; 


    // iteration after poping : 

    v.pop_back() ;

    for( int i:v) {
        cout<< i <<" " ;
    } 
    cout<<endl; 


    // 8). Clearing the vector : 

    cout << " Before Clearing the vector, size -> : " << v.size() <<endl; 

    v.clear(); 

     cout << " After Clearing the vector, size -> : " << v.size() <<endl; 


} 


// Output : 
// Vector A : 
// 1 1 1 1 1
// Copied Vector is :
// 1 1 1 1 1
// Capacity -> 0
// Capacity -> 1
// Capacity -> 2
// Capacity -> 4
// Size of vector -> 3
// Element at index : 3
// Front Element is :1
// Back Element is :3
// 1 2 3
// 1 2
// Before Clearing the vector, size -> : 2
// After Clearing the vector, size -> : 0 




