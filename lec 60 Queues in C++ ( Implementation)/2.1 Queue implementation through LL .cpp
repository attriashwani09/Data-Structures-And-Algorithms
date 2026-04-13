#include<iostream>
using namespace std ; 

class Node{

    public : 
    Node* next ;
    int data ;

    Node(int d ){ 
        this -> data = d ;
        this -> next = NULL ;
    } 
} ;


class queue{

    public : 
    Node* qfront ;
    Node* rear ; 

    // constructor 
    queue(){

        qfront = NULL ;
        rear = NULL ;
    }  


    // enqueue 
    void enqueue( int d ){

        Node* newNode = new Node( d ) ;

        // pushing in empty queue
        if( qfront == NULL ){

            qfront = newNode ;
            rear = newNode ; 
            return ;
        } 
        else{

            rear -> next = newNode ;
            rear = newNode ;
        } 

    } 


    // dequeue 

    void pop(){

        if( isEmpty()){

            cout << "Queue is empty " << endl ;
            return ;
        } 
        else {

            Node* temp = qfront ;

            if( qfront == rear ){
                qfront = NULL ;
                rear = NULL ;
            } 
            else{
                qfront = qfront -> next ;
                temp -> next = NULL ;
            } 

            cout << "Deleted -> " << temp -> data << endl ;

            delete temp ;
        }
    } 

    bool isEmpty(){

        if( qfront == NULL ){ 
            return true ;
        } 
        else{
            return false ;
        }
    } 


    int front(){

        if( isEmpty() ){
            return -1 ;
        } 

        return qfront -> data ;
    } 


    int back(){

        if( isEmpty() ){
            return -1 ;
        } 

        return rear -> data ;
    } 


} ;

int main(){

    queue q ;

    q.enqueue( 10 ) ;
    q.enqueue( 20 ) ;
    q.enqueue( 30 ) ;

    cout << "front -> " << q.front() << endl ; 
    cout << "back -> " << q.back() << endl ;
    cout << endl ;

    q.pop() ;
    cout << "front -> " << q.front() << endl ;  
    cout << "back -> " << q.back() << endl ;
    cout << endl ;

     q.pop() ;
    cout << "front -> " << q.front() << endl ;
    cout << "back -> " << q.back() << endl ;
    cout << endl ;

    q.pop() ;
    cout << "front -> " << q.front() << endl ;
    cout << "back -> " << q.back() << endl ;


} 


// Output : 
// front -> 10
// back -> 30

// Deleted -> 10
// front -> 20
// back -> 30

// Deleted -> 20
// front -> 30
// back -> 30

// Deleted -> 30
// front -> -1
// back -> -1