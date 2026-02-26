#include<iostream>  
#include<deque>
using namespace std;

// A deque is a data structure that allows insertion and deletion at both ends (front and back) .

int main(){

    deque<int> d; 

    // 1). Insertion :

    d.push_back(1) ;
    d.push_front(2) ;

    for(int i:d) {
        cout<< i << " " ;
    } 
    cout << endl; 


    // 2). Deletion : 
    // d.pop_back() ;
    // d.pop_front(); 


    // 3). Accessing front and back index :

    cout<< "Front Index : " << d.front() << endl ; 
    cout << "Back Index : " << d.back() << endl ;  


    // 4). At :
    cout << "Element at index 1 : " << d.at(1) << endl;


    // 5). Empty or not :
    cout << "CHeck Empty : " << d.empty() << endl ;



    // 6). CHeck Size and Erase :
    cout<< "Before Erase, Size : " << d.size() << endl;

    d.erase(d.begin() , d.end()) ;

    cout<< "After Erase , Size : " << d.size() << endl;


    
} 


// Output :
// 2 1 
// Front Index : 2
// Back Index : 1
// Element at index 1 : 1
// CHeck Empty : 0
// Before Erase, Size : 2
// After Erase , Size : 0 

