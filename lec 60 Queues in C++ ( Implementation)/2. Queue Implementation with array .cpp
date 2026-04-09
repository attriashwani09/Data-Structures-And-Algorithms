#include<iostream>  
using namespace std ; 

class queue{

     
    int *arr ;
    int qfront ;
    int rear ;
    int size ;

    public : 

    queue(){

        int size = 10001 ;

        arr = new int[ size ] ;

        qfront = 0 ;
        rear = 0 ;
    } 


    void enqueue( int d ){

        // check if the queue is full 
        if( rear == size ){
            cout << "Queue Overflow " << endl ;
            return ;
        } 

        // Else push the data in the array 
        arr[ rear ] = d ;
        rear ++ ;
    } 


    void pop() {

        // check if queue has any elements or not 
        if( isEmpty() ){
            cout << " Queue is Empty " << endl ;
            return ;
        } 

        // else remove the element 
        arr[ qfront ] = -1 ;
        qfront ++ ;

        // reset front and rear if queue become empty
        if( qfront == rear ){
            qfront = 0 ;
            rear = 0 ;
        }

    } 


    bool isEmpty(){

        if( qfront == rear ){
            return true ;
        } 

        return false ;
    } 


    // get the front element from the queue 
    int front() {

        if( isEmpty() ){

            return -1 ;

        } 

        return arr[qfront] ;

    } 


    // get the rear element from the queue 
    int back(){

        if( isEmpty() ){

            return -1 ;

        } 

        return arr[ rear - 1 ] ;

    }
    

} ;

int main(){

    queue q;

    q.enqueue( 10 ) ;
    q.enqueue( 20 ) ;
    q.enqueue( 30 ) ;

    cout << "Front -> " << q.front() << endl ; 
    cout << "Rear -> " << q.back() << endl ; 

    q.pop() ;

    cout << "After Pop -> " << q.front() << endl ; 

    cout << "Check Empty -> " << q.isEmpty() << endl ; 



} 


// Output : 
// Front -> 10
// Rear -> 30
// After Pop -> 20
// Check Empty -> 0
