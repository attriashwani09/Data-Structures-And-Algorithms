// Stack : It follows LIFO (Last In First Out ) 
#include<iostream> 
#include<stack>
using namespace std ; 

int main() {

    stack<int> st ;

    st.push(10) ;
    st.push(20) ;
    st.push(30) ;

    // check the top Element 
    cout << "Top ELement = " << st.top() << endl ; 

    // Now pop the element and recheck top   
    st.pop() ;

    cout << "Top ELement After Pop = " << st.top() << endl ;  

    // To check Size
    cout << "Size = " << st.size() << endl ;  


    // To check if it is empty or not 
    if( st.empty() ){
        cout << "Stack is empty ." << endl ;
    } 
    else{
        cout << "Stack is not Empty ." << endl ;
    } 



} 


// Output : 
// Top ELement = 30
// Top ELement After Pop = 20
// Size = 2
// Stack is not Empty .