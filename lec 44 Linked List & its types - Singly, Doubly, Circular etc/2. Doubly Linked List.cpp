#include<iostream>
using namespace std; 

class Node{

    public: 
    Node* prev ;
    int data ;
    Node* next ; 

    Node( int x ){ 
        this -> data = x ;
        this -> prev = NULL ; 
        this -> next = NULL ;

    } 

    ~Node() {
        int value = this -> data ;

        if( this -> next != NULL ){
            delete next ;
            this -> next = NULL ;
        } 

        cout << "Memory is free for node " << value << endl ;
    }
} ;  


// Print the  Doubly Linked Lsit 
void print(Node* &head ) {

    Node* temp = head ;

    while( temp != NULL ){

        cout << temp -> data << " " ; 
        temp = temp -> next ; 

    } 
    cout << endl ;
} 


// get length of  Dbly LL 
 int getLen(Node* &head){

    Node* temp = head ;
    int len = 1;

    while ( temp != NULL )
    {
        len ++ ;
        temp = temp -> next ;
    } 

    return len ;
    
 } 



 // INsert At Head 

 void insertAtHead( Node* &head , Node* &tail , int d ){

    // If there is empty ll 
    if( head == NULL ){
        Node * temp = new Node(d) ;

        head = temp ;
        tail = temp ; 

        return ;
    } 


    // else create a new node and join at front in the remaining . 
    Node* newNode = new Node(d) ;
    newNode -> next = head ;
    head -> prev = newNode ;

    head = newNode ;
 } 


// Insert At Tail 
void insertAtTail(Node* &head , Node* &tail , int d ) {

    // if the LL is empty 

    if( tail == NULL ){
        Node * temp = new Node(d) ;

        head = temp ;
        tail = temp ; 

        return ;
    } 


    // else create a new node and join it with the remaining LL 
    Node* newNode = new Node( d ) ;

    tail -> next = newNode ;
    newNode -> prev = tail ;
    tail = tail -> next ; 

} 


// Insert At Position : 
void insertAtPosition( Node* &head , Node* &tail , int pos , int d) {

    if( pos == 1){
        insertAtHead( head , tail , d) ;
        return ;
    } 

    Node* temp = head ;
    int cnt = 1;

    while( cnt < pos - 1){
        temp = temp -> next ;
        cnt ++ ;
    } 


    if( temp ->next == NULL ){
        insertAtTail( head , tail , d) ;
        return ;
    } 


    // else create a newNode and insert it at correct position 
    Node* newNode = new Node( d ) ;

    Node* temp2 = temp -> next ;

    // now connect the new node at the position with remaining LL 

    newNode -> next = temp2 ;
    temp2 -> prev = newNode ;

    temp -> next = newNode ;
    newNode -> prev = temp ;

} 


// Delete At Position : 
void deleteAtPosition( Node* &head , Node* &tail , int pos ) {

    if( pos == 1 ){

        Node* temp = head ;
        temp -> next -> prev = NULL ;
        head = temp -> next ;
        temp ->next = NULL ;
        delete temp ;

    } 
    else{

        // move to the position 
        int cnt = 1; 
        Node* curr = head ;

        while( cnt < pos && curr != NULL ){

            curr = curr -> next ;
            cnt ++ ;

        } 

        if( curr == NULL ){
            cout << "Invalid Position " << endl ; 
            return ;
        } 

        // if the deletion is at last place  
        Node* prev = curr -> prev ;

        if( curr -> next == NULL ){
            prev -> next = NULL ;
            tail = prev ;
        } 
        else{
            prev -> next = curr -> next ; 
            curr -> next -> prev = prev ;
        } 

        curr -> next = NULL ;
        curr -> prev = NULL ;
        delete curr ;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    // insertAtHead(head , tail , 10 ) ;
    // insertAtHead(head , tail , 15 ) ;
    // insertAtHead(head , tail , 20 ) ; 
    // print(head) ;   


    // Insert At Tail 
    insertAtTail( head , tail , 10 ) ;
    insertAtTail( head , tail , 15 ) ;
    insertAtTail( head , tail , 20 ) ; 
    print( head ) ; 



    insertAtPosition( head , tail , 2 , 5 );
    print( head ) ; 

    deleteAtPosition( head , tail , 2 ) ;
    print( head ) ;


    cout << "head -> data : " << head -> data << endl ;
    cout << "tail -> data : " << tail -> data << endl ;
} 


// Output : 
// 10 15 20 
// 10 5 15 20
// Memory is free for node 5
// 10 15 20
// head -> data : 10
// tail -> data : 20