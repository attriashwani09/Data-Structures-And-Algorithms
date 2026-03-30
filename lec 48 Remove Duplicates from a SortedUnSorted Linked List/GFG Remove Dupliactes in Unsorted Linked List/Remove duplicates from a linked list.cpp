/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
       
       unordered_map< int , int> count ; 
       
       if( head -> next == NULL ){
           return head ;
       } 
       
       
       Node* curr = head ;
       Node* prev = NULL ;
       
       while( curr != NULL  ){
           
           
           int num = curr -> data ;
           
           count[ num ] ++ ;
           
           if( count[num] > 1){
               prev-> next = curr -> next ;
               curr -> next = NULL ;
               curr = prev -> next ;
           } 
           else{
               prev = curr ;
               curr = curr -> next ;
           }
       } 
       
       
       return head ;
    }
};