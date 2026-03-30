/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/ 



class Solution {
  public:
    int cycleStart(Node* head) {
        // code here 
        
        
        
        if( head == NULL || head -> next == NULL ) 
         return -1 ;
        
        
        Node* slow = head ;
        Node* fast = head ; 
        
        Node * meetPoint = NULL ;
        
        
        while( slow != NULL && fast != NULL ){
            
            slow = slow -> next ;
            fast = fast -> next ; 
            
            if( fast != NULL){
                fast = fast -> next ;
            }
            
            if( slow == fast )
            {
                meetPoint = slow ; 
                break ;
            }
        }  
        
        // Loop not Present 
        if( meetPoint == NULL )
        return -1; 
        
        // else LOOP present 
        
        fast = meetPoint ;
        slow = head ;
        
        while( slow != fast){
            slow = slow -> next ;
            fast = fast -> next ;
            
        } 
        
        return slow -> data ;
        
    }
};