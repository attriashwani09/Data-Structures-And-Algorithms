#include<iostream>
using namespace std; 

class Node{

    public :
    int data ;
    Node* next;

    Node( int d){
        this -> data = d;
        this -> next = NULL ;
    } 


    ~Node(){
        int value = this -> data ;

        if( this->next != NULL ){
            delete next ;
            this -> next = NULL ;
        } 

        cout << "Memory free for value : " << value << endl ;
    }

} ;

// element is the place where after which we have to the element 
void insertAtPosition( Node* &tail , int element , int d){ 

    // empty LL 
    if( tail == NULL ){

        Node* newNode = new Node(d) ;
        newNode -> next =  newNode;
        tail = newNode ;
        return ;
    }  

    // Non - empty LL 
    Node * temp = tail ;

    while( temp -> data != element ){
        temp = temp -> next ;
    }  

    // element found temp is at the element 
    Node * newNode = new Node(d) ;

    newNode -> next = temp -> next ;
    temp -> next = newNode ;

}  


void deleteNode(Node* &tail , int value){

    // Empty Linked List
    if( tail == NULL ){
        cout << "Linked - List is Empty \n" ;
        return ;
    } 

    //Non - Empty Linked List 
    Node* prev = tail ;
    Node* curr = tail -> next ;

    while( curr-> data != value ){
        prev = curr ;
        curr = curr -> next ;
    } 

    // NOw we are at the correct node for deletion . 

    prev -> next = curr -> next ;

    // only 1 node LL  
    if( curr == prev ){
        tail = NULL ;
    } 

    else if( tail == curr ){  // >= 2 nodes in Linked List 
        tail = prev ;
    } 

    curr -> next = NULL ;
    delete curr ;
    

}


void print(Node* &tail){

    Node* temp = tail ;

    if( tail == NULL ){
        cout << "Empty Linked - List !!" << endl ;
        return ;
    } 

    do{
        cout << temp -> data << " " ; 
        temp = temp -> next ;
    } 
    while( temp != tail ) ;

    cout << endl ;
    
}

int main() {

    Node * tail = NULL ;

    for(int i=1; i<=5 ; i++ ){
        insertAtPosition( tail , (i-1)*5 , i*5);
    } 

    print( tail ) ; 


    for(int i=1; i<=5 ; i++ ){
        deleteNode( tail  , i*5);
    } 

} 


// Output : 
// 5 10 15 20 25 
// Memory free for value : 5
// Memory free for value : 10
// Memory free for value : 15
// Memory free for value : 20
// Memory free for value : 25