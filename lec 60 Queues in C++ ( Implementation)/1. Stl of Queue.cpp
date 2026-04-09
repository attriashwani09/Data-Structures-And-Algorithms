#include<iostream> 
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    // Queue is a data structure that follows FIFO (First In First Out). 

    q.push( 10 ) ;
    q.push( 20 ) ;
    q.push( 30 ) ;

    cout << " Front of Queue -> " << q.front() << endl ;
    cout << " Back of Queue -> "  << q.back() << endl ;

    q.pop() ;

    cout << "After POP , Front -> " << q.front() << endl ; 

    cout << "Size -> " << q.size() << endl ;

    cout << "Check Empty -> " << q.empty() << endl ; 

    
} 

// Output : 
// Front of Queue -> 10
//  Back of Queue -> 30
// After POP , Front -> 20
// Size -> 2
// Check Empty -> 0