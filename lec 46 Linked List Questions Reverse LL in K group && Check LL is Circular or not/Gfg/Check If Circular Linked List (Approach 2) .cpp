/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        
        // Use unordered map : Whenever we visit any node we will increase its count . if the count becomes more tthan 1 means it is visited twice , which means it is a circular LL .
        unordered_map< Node* , int > count ;
        
        if( head == NULL ){
            return true ;
        } 
        
        
        Node* temp = head ;
        
        while( temp != NULL ){

            
            count[ temp ] ++ ;
            
            if( count[ temp ] > 1 ){
                return true;
            }
            
            temp = temp -> next ;
        } 
        
        
        return false ;
    }
};