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
    for(auto i : m ){
        cout << i.first << " " << i.second << endl ;
    }
}