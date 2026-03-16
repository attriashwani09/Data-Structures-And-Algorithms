#include<iostream>
using namespace std; 

void ReachHome( int src , int dest ) {

    cout << "Source -> " << src << " Destination -> " << dest << endl ;


    // Base Case :
    if( src == dest ) {
        cout << " ! Reached Home ! \n " ; 
        return ;
    }  

    // Processing 
    src ++ ; 

    ReachHome (src , dest ) ;

}

int main(){ 

    int src =1 , dest = 10 ; 

    ReachHome( src , dest ) ;

} 


// OUtput : 
// Source -> 1 Destination -> 10
// Source -> 2 Destination -> 10
// Source -> 3 Destination -> 10
// Source -> 4 Destination -> 10
// Source -> 5 Destination -> 10
// Source -> 6 Destination -> 10
// Source -> 7 Destination -> 10
// Source -> 8 Destination -> 10
// Source -> 9 Destination -> 10
// Source -> 10 Destination -> 10
//  ! Reached Home ! 