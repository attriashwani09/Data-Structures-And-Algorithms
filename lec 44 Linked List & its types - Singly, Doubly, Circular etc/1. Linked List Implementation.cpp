#include<iostream>
using namespace std; 

class Node{

    public : 
    int data ;
    Node*  next ; 

    // constructor 
    Node( int data ){
        this -> data = data ; 
        this -> next = NULL ;
    } 


    ~Node(){

        int value = this -> data ;

        // memory free 
        if( this -> next != NULL ){
            delete next ;
            this -> next = NULL ;
        } 

        cout << "Memory is free for node with data " << value << endl ;

    }
} ; 


// Insert at Head 

void insertAtHead(Node* &head , int d) {

    // Create a new node for the data  
    Node* newNode = new Node(d) ; 

    // Connect it with head
    newNode->next = head ;

    // Correct the head 
    head = newNode ;

}  

// Insert At Tail 
void insertAtTail( Node* &tail , int d) {

    // Create a new Node 
    Node*  newNode = new Node(d) ; 

    // Connect tail with it . 
    tail -> next = newNode ; 

    tail = tail -> next ;  // Move Tail 

} 


// Insert At position : 

void insertAtPostion(Node* &head ,Node* &tail, int pos , int d ) {

    // If the pos of insertion is at head 
    if( pos == 1 ){
        insertAtHead( head , d ) ;
        return ;
    } 


    int cnt = 1 ;  
    Node* temp = head ;

    // Moving to the position Node Where we have to insert 
    while(cnt < pos-1){
        temp = temp -> next ;
        cnt ++ ;
    }  

    // Check Wheater if it is tail node or not 
    if( temp -> next == NULL){
        insertAtTail( tail , d) ; 
        return ;
    } 


    // Insert at correct position 

    Node* newNode = new Node(d) ;   // create a new node 

    newNode -> next = temp -> next ;  // connect newNode with next node 

    temp -> next = newNode ;   // connect new node with the previous node 

}  

// Deletion of NOde :
void deleteAtPosition(Node* &head ,Node* &tail , int pos ){

    // If 1st Position 
    if( pos == 1 ){
        Node* temp = head ; 
        head = head -> next ;
        temp -> next = NULL ;
        delete temp ;

    } 
    else{

        int cnt = 1; 
        Node* curr = head ;
        Node* prev = NULL ; 

        while( cnt < pos ){
            prev = curr ;
            curr = curr -> next ;
            cnt ++ ;
        } 

        prev -> next = curr -> next ; 

        if( prev -> next == NULL ){
            tail = prev ;
        }

        curr -> next = NULL ;
        delete curr ;
    }
}

// Printing a Linked List 
void print(Node* head){

    // Create a temp Node 
    Node* temp = head ;

    while ( temp != NULL )
    {
        cout << temp ->data << " " ;  

        // Move temp ahead
        temp = temp -> next ; 

    } 
    cout << endl ;
    
} 

int main(){ 

    Node* node = new Node(10); 
    
    // cout << node -> data << endl ;   
    // cout << node -> next << endl ;   

    Node* head = node ; 
    Node* tail = node ;

    // cout << "For Insert At Head : " << endl ; 

    
    // insertAtHead( head , 15) ;  
    // print(head); 
    
    // insertAtHead( head , 20) ;  
    // print(head);

    // insertAtHead( head , 25) ;    
    // print(head);


    // For Insert At Head : 
    // 15 10
    // 20 15 10
    // 25 20 15 10


    // Insert At Tail :  
    cout << "Insert at Tail : " << endl ;
    
    insertAtTail( tail , 15) ;  
    print(head);
    
    insertAtTail( tail , 20) ;
    print(head); 

    insertAtTail( tail , 25) ; 
    print(head);  

    // Insert at Tail : 
    // 10 15
    // 10 15 20
    // 10 15 20 25


    // Insert at Position : 
    insertAtPostion( head , tail, 3 ,  17 ) ; 
    print( head ) ;   // 10 15 17 20 25


    cout << "Head -> data " << head -> data << endl ;
    cout << "Tail -> data " << tail -> data << endl ;  

    // Head -> data 10
    // Tail -> data 25  
    deleteAtPosition( head , tail , 1 ) ;
    print( head ) ; 

   

} 

