#include<iostream> 
#include<map>
using namespace std;

int main() {

    // Initialization 
    map< int , string> m; 

    // Mapping : Inserting key and value 
    // Way 1
    m[1] = "Arun" ;
    m[5] = "Ajay" ;
    m[20] = "Akash" ;

    // Way 2 : 
    m.insert( {100 , "Rahul"} ) ;

    // Acces Key by i.first and value by i.second  
    cout << "Before Erase : \n" ;
    for(auto i : m ){
        cout << i.first << " " << i.second << endl ;
    } 
    cout << endl ;



    // Erasing Element 
    m.erase(100) ;

    cout << "After Erase : \n" ;
    for(auto i : m ){
        cout << i.first << " " << i.second << endl ;
    } 




    // find any key (Element) 

    cout << "Finding 20 -> " << m.count(20) << endl ; 

    cout << "Finding 50 -> " << m.count(50) << endl ;  



    // FInd Function : Returns the iterator of element that is being searched . 

    auto it = m.find(5) ;

    for( auto i = it ; i != m.end() ; i++){
        cout << (*i).first << endl ;
    }


} 




// Output : 
// Before Erase : 
// 1 Arun
// 5 Ajay
// 20 Akash
// 100 Rahul

// After Erase :
// 1 Arun
// 5 Ajay
// 20 Akash
// Finding 20 -> 1
// Finding 50 -> 0
// 5
// 20