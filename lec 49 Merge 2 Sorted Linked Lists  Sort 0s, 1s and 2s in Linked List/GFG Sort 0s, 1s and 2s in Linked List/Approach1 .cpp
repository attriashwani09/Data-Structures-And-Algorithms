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
        
        // Step 1 : check total 0's , 1's and  2's
        unordered_map<int , int> mp ;
        
        Node* temp = head ;
        
        while( temp != NULL ){
            
            int num = temp -> data ;
            
            mp[ num ] ++ ; 
            
            temp = temp -> next ;
        } 
        
        
        temp = head ;
        
        
        // place 0's ,, 1's , 2's at their correct place 
        
        int cnt = mp[0] ;
        
        while( mp[0] > 0 ){
            
            temp -> data = 0 ;
            
            temp = temp -> next ;
            
            mp[0] -- ;
        } 
        
        
        cnt = mp[1] ;
        
        while( mp[1] > 0 ){
            
            temp -> data = 1 ;
            
            temp = temp -> next ;
            
            mp[1] -- ;
        } 
        
        
        
        cnt = mp[2] ;
        
        while( mp[2] > 0 ){
            
            temp -> data = 2 ;
            
            temp = temp -> next ;
            
            mp[2] -- ;
        } 
        
        
        return head ;
        
    }
};