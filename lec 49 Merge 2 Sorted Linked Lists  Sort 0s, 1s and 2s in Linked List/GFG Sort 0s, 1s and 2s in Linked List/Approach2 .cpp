/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* zerohead = new Node( -1 ) ;
        Node* zerotail = zerohead ;
        
        Node* onehead = new Node( -1 ) ;
        Node* onetail = onehead ;
        
        Node* twohead = new Node( -1 ) ;
        Node* twotail = twohead ; 
        
        
        Node* temp = head ;
        
        // Step 1 : traverse the original List and divide it into 2 lists
        while( temp != NULL ){
            
            if( temp -> data == 0 ){   
                zerotail -> next = temp ;    // Attach curr node to 0list
                zerotail = temp ;
            } 
            
            else if( temp -> data == 1){
                onetail -> next = temp ;    // Attach curr node to 1list
                onetail = temp ;
            } 
            
            else if( temp -> data = 2 ){
                twotail -> next = temp ;   // Attach curr node to 2list
                twotail = temp ;
            } 
            
            temp = temp -> next ;   // Move temp ahead .
        } 
        
        
        // Step 2 : now merge all 3 list 
        
        // if there is no 1's , connect directly to 2's
        if( onehead->next != NULL ){
            zerotail -> next = onehead -> next ;
        } 
        else{
            zerotail -> next = twohead -> next ;
        } 
        
        // connect 1's with 2's 
        onetail -> next = twohead -> next ;
        twotail->next = NULL ;
        
        
        // New head of sorted List : Skip dummy node ( -1 ) ;
        head = zerohead -> next ;
        
        delete zerohead ;
        delete onehead ;
        delete twohead ;
        
        return head ;
    }
};