#include<iostream>
using namespace std ;

class Stack{

     
    int *arr ;  
    int size ; 
    int top ; 

    public : 

    // Constructor to initialie Stack  
    Stack( int size ){
        this -> size = size ; 
        arr = new int[size] ;
        this -> top = -1 ;
    }  


    // function to push element
    void push( int d ){

        if( size - top > 1 ){
            top ++ ;
            arr[top] = d ;
        } 
        else{
            cout << "Stack Overflow \n" << endl ;
        } 
    } 


    // function to pop the element
    void pop() {

        if( top > -1 ){
            top -- ;
        } 
        else{
            cout << "Empty Stack " << endl ;
        } 
    }   


    // To get the top element
    int peek(){

        if( top  >= 0){
            return arr[ top ] ;
        } 
        else{
            cout << "Empty Stack " << endl ;
            return -1 ;
        } 
    }  


    // function to check if the stack is empty or not 

    bool isEmpty(){

        if( top >=0 ){
            return false ;
        } 
        else{
            return true ;
        }
    }


} ; 


int main() {

    Stack st( 10 ) ;

    st.push( 10 ) ; 
    cout << st.peek() << endl ; 

    st.push( 20 ) ; 
    cout << st.peek() << endl ;

    st.push( 30 ) ; 
    cout << st.peek() << endl ; 

    st.pop() ;
    cout << "After Pop , top Element -> " << st.peek() << endl ;

}