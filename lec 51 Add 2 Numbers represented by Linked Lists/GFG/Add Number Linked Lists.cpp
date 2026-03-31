/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution { 
    
    Node* reverse( Node* head){

        Node* prev = NULL ;
        Node* curr = head ;
        Node* forward = NULL ;

        while( curr != NULL ){

            forward = curr -> next ;

            curr -> next = prev ;
            prev = curr ;
            curr = forward ;
        } 

        return prev ; 
        
    }
    
    
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here 
        Node* ans = new Node( -1 ) ; 
        Node* ansTail = ans ;
        // Step 1 : reverse Both Linked Lists  
        
        Node* first = reverse( head1 ) ; 

        Node* second = reverse( head2 ) ; 

        int carry = 0 ;

        while( first != NULL && second != NULL ){

            int num = first -> data + second -> data + carry ;

            int dig = num % 10 ;
            carry = num / 10 ;

            Node* newNode = new Node( dig ) ;
            ansTail -> next = newNode ;
            ansTail = newNode ; 

            first = first -> next ;
            second = second -> next ;
        } 


        // step 3 : check if remainning elements im both first and second and also carry 

        while( first != NULL ){

            int num = first -> data + carry ;

            int dig = num % 10 ;
            carry = num / 10 ;

            Node* newNode = new Node( dig ) ;
            ansTail -> next = newNode ;
            ansTail = newNode ; 

            first = first -> next ;
        } 


        // check if second is not NULL 
        while( second != NULL ){
            int num = second -> data + carry ;

            int dig = num % 10 ;
            carry = num / 10 ;

            Node* newNode = new Node( dig ) ;
            ansTail -> next = newNode ;
            ansTail = newNode ; 

            second = second -> next ; 
        } 

        // check if carry still have some value left 

        if( carry != 0 ){

            Node* newNode = new Node( carry ) ;

            ansTail -> next = newNode ;
            ansTail = newNode ;
        } 


        ans = ans -> next ; 
        
        ans = reverse( ans ) ; 
        
        while( ans -> data == 0 ){
            ans = ans -> next ;
        }

        return ans;
        
    }
};