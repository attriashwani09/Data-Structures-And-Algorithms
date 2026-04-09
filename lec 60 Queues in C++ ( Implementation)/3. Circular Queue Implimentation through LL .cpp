#include<iostream>
using namespace std ; 

class Node{

    public : 
    Node* next ;
    int data ;

    Node( int d ){
        this -> next = NULL ; 
        this -> data = d ;
    }
} ; 

class queue{

    Node* qfront ;
    Node* rear ; 

    public :

    queue(){
        qfront = NULL ;
        rear = NULL ;
    } 


    void enqueue( int d ){

        
        Node* newNode = new Node( d) ;  

        // if Empty Queue 
        if( qfront == NULL ){

            qfront = newNode ;
            rear = newNode ;
        } 
        else{

        newNode -> next =  qfront ;
        rear -> next = newNode ;
        rear = rear ->next ;
        }  

    } 


    void dequeue(){

        // Empty Case :
        if( isEmpty() ){
            cout << "Queue is Empty " << endl ;
            
        }  
        else{

            // only 1 element in queue
            if( qfront == rear ){
                qfront = NULL ;
                rear = NULL ;
            }  
            else{ // more than one element in queue

                Node* temp = qfront  ;
                
                rear -> next = temp -> next ;
                qfront  = temp -> next ;

                temp -> next = NULL ;
                delete temp ;
            }
        }      
    } 

    // to Check if the queue is empty or not 
    bool isEmpty(){

        if( qfront == NULL ) 
            return true ; 

        return false ;
    } 


    // Function to return first element 

    int fornt(){

        if( isEmpty() ){
            return -1 ;
        } 

        return qfront -> data ;
    } 

    // Function to return last element
    int back(){

        if( isEmpty() ){
            return -1 ;
        } 

        return rear -> data ;
    } 


};

int main(){

    queue q ;

    q.enqueue( 10 ) ;
    q.enqueue( 20 ) ;
    q.enqueue( 30 ) ;

    cout << "Front -> " << q.fornt() << endl ; 
    cout << "Back -> " << q.back() << endl ; 

    q.dequeue() ;   
    cout << "Front -> " << q.fornt() << endl ; 
    cout << "Back -> " << q.back() << endl ;  

    cout << "Check Empty -> " << q.isEmpty() << endl ; 

    


}