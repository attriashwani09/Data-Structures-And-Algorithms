#include<iostream>
using namespace std; 

class Node{

    public : 
    int data ;
    Node* next ;

    Node( int d ){
        this -> data = d;
        this -> next = NULL ;
    }
} ;


class Stack{

    Node* top ;

    public :

    Stack(){
        top = NULL ;
    } 

    
    void push( int d ){

        Node* newNode = new Node( d ) ;

        newNode -> next = top  ;
        top = newNode ; 

        cout << newNode -> data << " is pushed into stack . " << endl ;
    } 


    void pop(){

        // check if stack have elements or not 
        if( isEmpty() ){
            cout << "Stack is Empty \n" << endl ;
            return ;
        } 

        Node* temp = top ;
        top = top -> next ;

        cout << temp -> data << " is deleted from the stacck . " << endl ; 
        delete temp ;

    } 


    int peek() {

        // check is stack has any elements or not 
        if( isEmpty() ){

            cout << "Stack is Empty " << endl ;
            return -1 ;
        } 

        return top -> data ;
    } 


    bool isEmpty() {

        return top == NULL  ;
    } 

    void display(){

        Node* temp = top ;

        cout << "Printing stack data : " << endl ;

        while( temp != NULL ){
            cout << temp -> data << " " ; 
            temp = temp -> next ;
        } 
        cout << endl ;
    }
         

    // ~Stack(){
        
    //     while( !isEmpty() ){
    //         pop() ;
    //     }
    // }
} ;


int main() {

    Stack st ;

    cout << "Empty Stack -> " << st.isEmpty() << endl ; 

    st.push( 10 ) ;
    st.push( 20 ) ;
    st.push( 30 ) ;

    cout << "Top Emelemt -> " << st.peek() << endl ; 

    st.display() ; 

    st.pop() ; 
    cout << "Top Emelemt -> " << st.peek() << endl ; 


} 


// OUTPUT : 
// Empty Stack -> 1
// 10 is pushed into stack .
// 20 is pushed into stack .
// 30 is pushed into stack .
// Top Emelemt -> 30
// Printing stack data :
// 30 20 10
// 30 is deleted from the stacck .
// Top Emelemt -> 20 