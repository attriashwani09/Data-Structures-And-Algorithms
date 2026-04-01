/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution { 

    ListNode* getMid( ListNode* head ){

        ListNode* slow = head ;
        ListNode* fast = head ->next ;  // Start fast from second Pointer 

        while( fast != NULL && fast ->next != NULL ){

            slow = slow -> next ;
            fast = fast ->next->next ;
        } 


        return slow ;
    } 

    ListNode*  mergeLists( ListNode* left , ListNode* right ){

        if( left == NULL )
        return right ;

        if( right == NULL )
        return left ; 


        ListNode* ans = new ListNode( -1 ) ;
        ListNode* temp = ans ;

        while( left != NULL && right != NULL ){

            if( left -> val <= right -> val ){
                temp -> next = left ;

                left = left -> next ;
                temp = temp -> next ;
            } 
            else{

                temp -> next = right ;

                right = right -> next ;
                temp = temp -> next ;
            }
        } 


        // Check if any elements are left in left 

        while( left != NULL ){
            temp -> next = left ;

            left = left -> next ;
            temp = temp -> next ;
        } 


        // check if any elements are left at right 

        while( right != NULL ){
            temp -> next = right ;

            right = right -> next ;
            temp = temp -> next ;
        }



        // skip the dummy node in ans 

        ans = ans -> next ;

        return ans;
    } 
public:
    ListNode* sortList(ListNode* head) {
        
        // Base Case : 
        if( head == NULL || head -> next == NULL ){
            return head ;
        }  

        // Step 1 : Get Mid Pointer 
        ListNode* mid = getMid( head ) ;

        // Step 2 : Divide the Ljnked Listv into 2 halves 
        ListNode* left = head ;

        ListNode* right = mid -> next ;

        mid -> next = NULL ;

        // recursively sort left and right part 
        left = sortList( left ) ;
        right = sortList( right ) ;


        // Step 3 : merge both lists 
        ListNode * ans = mergeLists( left , right ) ; 


        return ans ;


    }
};