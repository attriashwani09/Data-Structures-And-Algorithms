/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {  

    void print( Node* copyHead ){

        Node* temp = copyHead ;

        while( temp != NULL ){
            cout << temp-> val << " " ;
            temp = temp -> next ;
        } 
        cout << endl ;
    }

    void insertAtTail( Node* &head , Node* &tail , int val ){

        if( head == NULL ){
            Node* newNode = new Node( val ) ;
            head = newNode ;
            tail = newNode ; 
            return ;
        } 
        else{

            Node* newNode = new Node( val ) ;
            tail -> next = newNode ;
            tail = newNode ;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        
        if( head == NULL  )
        return head ; 


        // Step 1 : create a copy List with just next pointers 
        Node* copyHead = NULL ;
        Node* copyTail = NULL ;

        Node* temp = head ;

        while( temp != NULL ){

            int val = temp -> val ;

            insertAtTail( copyHead , copyTail , val ) ;

            temp = temp -> next ;
        } 


        print( copyHead ) ;


        //Step 2 : create Mapping of Clone List to original List 

        unordered_map< Node* , Node* > oldToNew ;

        Node* originalNode = head ; 
        Node* cloneNode = copyHead ;

        while( originalNode != NULL && cloneNode != NULL ){

            oldToNew[ originalNode ] = cloneNode ;

            originalNode = originalNode -> next ;
            cloneNode = cloneNode -> next ;

        } 


        // step 3 : match the random pointers of each Node with the Help of mapping 

        originalNode = head ;
        cloneNode = copyHead ;

        while( originalNode != NULL ) {

            cloneNode -> random = oldToNew[ originalNode -> random ] ;

            originalNode = originalNode -> next ;
            cloneNode = cloneNode -> next ;

        } 


        return copyHead ;
    }
};