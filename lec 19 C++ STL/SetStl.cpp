#include<iostream> 
#include<set>
using namespace std;

int main() {

    set<int> s;

    s.insert(5) ;
    s.insert(5) ;
    s.insert(4) ;
    s.insert(1) ;
    s.insert(0) ;
    s.insert(0) ;
    s.insert(1) ;

    for( auto it:s){
        cout<< it <<" " ;      // 0 1 4 5 
    } 
    cout<<endl;       
}