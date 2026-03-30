/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        // step 1: check id THere is Loop
        
        if( head == NULL || head -> next == NULL){
            return ;
        } 
        
        
        // use floyd's detection Algo : 
        Node* slow = head ;
        Node* fast = head ; 
        Node* meetingPoint = NULL ;
        
        while( fast != NULL && fast -> next != NULL ){
            slow = slow -> next ;
            fast = fast ->next->next ;
            
            if(slow == fast){
                meetingPoint = fast ;
                break ;
            }
        } 
        
        
        if( meetingPoint == NULL ) // no cycle present 
        return ;
        
        
        // else cycle present 
        //step 2 : find the position from where cycle started .  
        slow = head ;
        fast = meetingPoint ;
        
        while( slow != fast ){
            slow = slow -> next ;
            fast = fast -> next ;
        } 
        
        
        // slow is the starting point of the loop 
        
        // step 3: now find the last node of the loop nad break the loop from that node 
        Node* temp = slow->next ;
        
        while( temp -> next != slow ){
            temp = temp -> next ;
        } 
        
        // now temp is at last node of loop 
        // just break the loop here 
        
        temp ->next = NULL ;
        
        
    }
};